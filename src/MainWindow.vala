public class MainWindow : Gtk.ApplicationWindow {

    public MainWindow (Gtk.Application application) {
        /*Binding the window to our app*/
        this.application = application;

        /*Setting the default dimensions for the window*/
        this.set_default_size (1080, 720); //width = 1080px ; height = 720px

        /*Add the headerbar to our app*/
        var header = new HeaderBar("Karina", "Universal Podcast Player");
        this.set_titlebar (header);
    }

}
