#include <iostream>
#include <string>
#include <cstdlib>
#include <config.h>
#include <FL/Fl_Cairo_Window.H>
#include <FL/Fl_GIF_Image.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Input.H>
Fl_Cairo_Window* makeInputWindow();
Fl_Cairo_Window* makeDisplayWindow();
const int width = 600;
const int height = 300;
extern Fl_Cairo_Window * dw;
extern Fl_Input * in;
extern Fl_Input * lb;
