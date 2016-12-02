#include "lab.h"
Fl_Cairo_Window * dw;
Fl_Box * gb;
Fl_Cairo_Window* cbObese1Window(int w,int h)
{
    dw = new Fl_Cairo_Window(w,h); 
    dw->label("Moderately Obese");
    gb = new Fl_Box(0,200,512,384);
    gb ->image(new Fl_JPG_Image("obese.jpg"));
    return dw;
}
