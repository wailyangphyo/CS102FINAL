#include "lab.h"
Fl_Cairo_Window * dw;
Fl_Box * gb;
Fl_Cairo_Window* cbHealthyWindow(int w,int h)
{
    dw = new Fl_Cairo_Window(w,h); 
    dw->label("Healthy BMI");
    gb = new Fl_Box(0,200,512,384);
    gb ->image(new Fl_JPG_Image("healthyweight.jpg"));
    return dw;
}
