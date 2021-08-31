#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include "os-themes.h"

int main() {
    OS::use_aero_theme();
    auto win = new Fl_Window(400, 300);
    auto button = new Fl_Button(160, 200, 80, 40, "Click");
    button->box(OS_DEFAULT_BUTTON_BOX);
    win->end();
    win->show();
    return Fl::run();
}
