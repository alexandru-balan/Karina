#include <iostream>
#include <gtkmm/application.h>
#include "mainWindow.h"

using namespace std;

int main(int argc, char* argv[]) {

    auto app = Gtk::Application::create (argc, argv, "org.karina.podcasts");

    /*Create the main window and add it to the app*/
    MainWindow mainWindow (app, 980, 720);
    app->add_window (mainWindow);

    app->run (mainWindow);

    return 0;
}