using System;
using Windows.UI;
using Windows.UI.Xaml;
using Windows.UI.Core;
using Windows.Storage;
using Windows.Foundation;
using Windows.UI.Xaml.Media;
using Windows.UI.Xaml.Controls;
using Windows.UI.Xaml.Navigation;
using Windows.ApplicationModel.Activation;
using UnityPlayer;

namespace POCTestUWP
{
    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    public sealed partial class MainPage : Page
    {
        private SplashScreen splashScreen;
        private Rect splashImageRect;
        private WindowSizeChangedEventHandler onResizeHandler;
        private readonly AppCallbacks appCalbback = AppCallbacks.Instance;

        public MainPage()
        {
            InitializeComponent();
            NavigationCacheMode = NavigationCacheMode.Required;
            AppCallbacks appCallbacks = AppCallbacks.Instance;

            appCalbback.RenderingStarted += () => { RemoveSplashScreen(); };

            appCalbback.SetSwapChainPanel(DXSwapChainPanel);
            appCalbback.SetCoreWindowEvents(Window.Current.CoreWindow);
            appCalbback.InitializeD3DXAML();
            Overlaytest.Click += Overlaytest_Click;

            splashScreen = ((App)Application.Current).splashScreen;
            GetSplashBackgroundColorAsync();
            CoreDispatcher dispatcher = CoreWindow.GetForCurrentThread().Dispatcher;

            OnResize();
            onResizeHandler = new WindowSizeChangedEventHandler((o, e) => OnResize());
            Window.Current.SizeChanged += onResizeHandler;
        }

        private async void GetSplashBackgroundColorAsync()
        {
            try
            {
                StorageFile file = await StorageFile.GetFileFromApplicationUriAsync(new Uri("ms-appx:///AppxManifest.xml"));
                string manifest = await FileIO.ReadTextAsync(file);
                int idx = manifest.IndexOf("SplashScreen");
                manifest = manifest.Substring(idx);
                idx = manifest.IndexOf("BackgroundColor");

                if (idx < 0)  // background is optional
                    return;

                manifest = manifest.Substring(idx);
                idx = manifest.IndexOf("\"");
                manifest = manifest.Substring(idx + 1);
                idx = manifest.IndexOf("\"");
                manifest = manifest.Substring(0, idx);
                int value = 0;
                bool transparent = false;

                if (manifest.Equals("transparent"))
                    transparent = true;
                else if (manifest[0] == '#') // color value starts with #
                    value = Convert.ToInt32(manifest, 16) & 0x00FFFFFF;
                else
                    return; // at this point the value is 'red', 'blue' or similar, Unity does not set such, so it's up to user to fix here as well

                byte r = (byte)(value >> 16);
                byte g = (byte)((value & 0x0000FF00) >> 8);
                byte b = (byte)(value & 0x000000FF);

                await CoreWindow.GetForCurrentThread().Dispatcher.RunAsync(CoreDispatcherPriority.High, delegate ()
                {
                    byte a = (byte)(transparent ? 0x00 : 0xFF);
                    extendedSplashGrid.Background = new SolidColorBrush(Color.FromArgb(a, r, g, b));
                });
            }
            catch (Exception)
            { }
        }

        private void OnResize()
        {
            if (splashScreen != null)
            {
                splashImageRect = splashScreen.ImageLocation;
                PositionImage();
            }
        }

        private void PositionImage()
        {
            float inverseScaleX = 1.0f;
            float inverseScaleY = 1.0f;

            extendedSplashImage.SetValue(Canvas.LeftProperty, splashImageRect.X * inverseScaleX);
            extendedSplashImage.SetValue(Canvas.TopProperty, splashImageRect.Y * inverseScaleY);
            extendedSplashImage.Height = splashImageRect.Height * inverseScaleY;
            extendedSplashImage.Width = splashImageRect.Width * inverseScaleX;
        }

        /// <summary>
        /// Invoked when this page is about to be displayed in a Frame.
        /// </summary>
        /// <param name="e">Event data that describes how this page was reached.  The Parameter
        /// property is typically used to configure the page.</param>
        protected override void OnNavigatedTo(NavigationEventArgs e)
        {
            splashScreen = (SplashScreen)e.Parameter;
            OnResize();
        }

        private void Overlaytest_Click(object sender, RoutedEventArgs e)
        {
            Overlaytest.Content = "Clicked";
        }

        public void RemoveSplashScreen()
        {
            _ = DXSwapChainPanel.Children.Remove(extendedSplashGrid);
            if (onResizeHandler != null)
            {
                Window.Current.SizeChanged -= onResizeHandler;
                onResizeHandler = null;
            }
        }
    }
}
