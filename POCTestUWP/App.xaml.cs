using Windows.UI.Xaml;
using Windows.Storage;
using Windows.UI.Xaml.Controls;
using Windows.Graphics.Display;
using Windows.UI.ViewManagement;
using Windows.ApplicationModel.Activation;
using UnityPlayer;

namespace POCTestUWP
{
    /// <summary>
    /// Provides application-specific behavior to supplement the default Application class.
    /// </summary>
    public sealed partial class App : Application
    {
        public SplashScreen splashScreen;
        private readonly AppCallbacks appCallbacks;

        /// <summary>
        /// Initializes the singleton application object.  This is the first line of authored code
        /// executed, and as such is the logical equivalent of main() or WinMain().
        /// </summary>
        public App()
        {
            InitializeComponent();
            SetupOrientation();
            appCallbacks = new AppCallbacks();
        }

        protected override void OnLaunched(LaunchActivatedEventArgs e)
        {
            splashScreen = e.SplashScreen;
            InitializeUnity(e.Arguments);
        }

        protected override void OnActivated(IActivatedEventArgs args)
        {
            string appArgs = "";

            if (args.Kind == ActivationKind.Protocol)
            {
                ProtocolActivatedEventArgs eventArgs = (ProtocolActivatedEventArgs)args;
                splashScreen = eventArgs.SplashScreen;
                appArgs += string.Format("Uri={0}", eventArgs.Uri.AbsoluteUri);
            }
            InitializeUnity(appArgs);
        }

        protected override void OnFileActivated(FileActivatedEventArgs args)
        {
            string appArgs = "";

            splashScreen = args.SplashScreen;
            appArgs += "File=";
            bool firstFileAdded = false;

            foreach (IStorageItem file in args.Files)
            {
                if (firstFileAdded)
                    appArgs += ";";
                appArgs += file.Path;
                firstFileAdded = true;
            }

            InitializeUnity(appArgs);
        }

        private void InitializeUnity(string args)
        {
            appCallbacks.SetAppArguments(args);
            Frame rootFrame = (Frame)Window.Current.Content;

            // Do not repeat app initialization when the Window already has content,
            // just ensure that the window is active
            if (rootFrame == null && !appCallbacks.IsInitialized())
            {
                rootFrame = new Frame();
                Window.Current.Content = rootFrame;
                Window.Current.Activate();

                _ = rootFrame.Navigate(typeof(MainPage));
            }

            Window.Current.Activate();
        }

        public void SetupOrientation()
        {
            DisplayInformation.AutoRotationPreferences = DisplayOrientations.Landscape | DisplayOrientations.LandscapeFlipped | DisplayOrientations.Portrait | DisplayOrientations.PortraitFlipped;
            ApplicationView.PreferredLaunchWindowingMode = ApplicationViewWindowingMode.Auto;
        }

        public SplashScreen GetSplashScreen()
        {
            return splashScreen;
        }
    }
}
