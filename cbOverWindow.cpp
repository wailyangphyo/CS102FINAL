#include "lab.h"
Fl_Cairo_Window * dw;
Fl_Box * gb;
Fl_Cairo_Window* cbOverWindow(int w,int h)
{
    dw = new Fl_Cairo_Window(w,h); 
    dw->label("Overweight BMI");
    gb = new Fl_Box(0,200,512,384);
    gb ->image(new Fl_JPG_Image("overweight.jpg"));
    return dw;
}
