public class App : Gtk.Application {

    public App (string application_id, ApplicationFlags flags) {
        this.application_id = application_id;
        this.flags = flags;
    }

    protected override void activate () {
        var mainWindow = new MainWindow (this);

        /*Adding the window to the application*/
        this.add_window (mainWindow);

        mainWindow.show_all ();
    }

    public static int main (string[] args) {
        var app = new App("io.prongs.karina",ApplicationFlags.FLAGS_NONE);

        return app.run (args);
    }

}
