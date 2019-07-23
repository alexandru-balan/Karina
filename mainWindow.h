//
// Created by alexandru-balan on 22/07/19.
//

#ifndef KARINA_MAINWINDOW_H
#define KARINA_MAINWINDOW_H

#include <gtkmm/applicationwindow.h>
#include "WindowWidgets/headerBar.h"

using namespace Gtk;

class MainWindow : public ApplicationWindow {
private:
KarinaHeader* header = new KarinaHeader ("Karina", "The universal podcast player");

public:
    MainWindow (const Glib::RefPtr<Application>& application, int width, int height) : ApplicationWindow (application) {

    this->set_default_size(width, height);
    this->set_titlebar(*header);
}
};


#endif //KARINA_MAINWINDOW_H
