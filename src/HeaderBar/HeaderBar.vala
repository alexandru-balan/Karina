public class HeaderBar : Gtk.HeaderBar {

    public HeaderBar (string title, string subtitle) {
        /*Setting the title and subtitle*/
        this.title = title;
        this.subtitle = subtitle;
        this.has_subtitle = true;

        /*Show window decorations like close, minimize, maximize buttons*/
        this.show_close_button = true;
    }
}
