//
// Created by alexandru-balan on 22/07/19.
//

#ifndef KARINA_HEADERBAR_H
#define KARINA_HEADERBAR_H

#include <gtkmm/headerbar.h>
#include "HeaderBarWidgets/menuButton.h"

using namespace Gtk;

/*
 *  This class contains all the necesary information and widgets
 * to build the header bar of Karina
 */
class KarinaHeader : public HeaderBar {

private:
    Glib::ustring title;
    Glib::ustring subtitle;
    KarinaMenuButton karinaMenuButton;

public:
    KarinaHeader (const Glib::ustring& title, const Glib::ustring& subtitle) : HeaderBar () {
        this->title = title;
        this->subtitle = subtitle;

        /*Setting the title and subtitle of the headerbar*/
        this->set_title (title);
        this->set_subtitle (subtitle);

        /*Showing close,minimize,maximize buttons*/
        this->set_show_close_button (true);

        /*Adding the menu button on the left side*/
        this->pack_start(karinaMenuButton);

        this->show_all ();
    }

};

#endif //KARINA_HEADERBAR_H
