//
// Created by alexandru-balan on 22/07/19.
//

#ifndef KARINA_MENUBUTTON_H
#define KARINA_MENUBUTTON_H

#include <gtkmm/menubutton.h>

using namespace Gtk;

class KarinaMenuButton : public MenuButton {
public:
    KarinaMenuButton () : MenuButton () {
        this->set_direction(ArrowType::ARROW_NONE);
    }
};

#endif //KARINA_MENUBUTTON_H
