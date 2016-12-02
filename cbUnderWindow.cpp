#include "lab.h"
Fl_Cairo_Window * dw;
Fl_Box * gb;
Fl_Cairo_Window* cbUnderWindow(int w,int h)
{
    dw = new Fl_Cairo_Window(w,h); 
    dw->label("Underweight BMI");
    gb = new Fl_Box(0,150,512,384);
    gb ->image(new Fl_JPG_Image("underweight.jpg"));
    return dw;
}
