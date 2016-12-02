#include "lab.h"
Fl_Cairo_Window * dw;
Fl_Box * gb;
Fl_Cairo_Window* cbObese2Window(int w,int h)
{
    std::cout << "w: " << w << std::endl;
    std::cout << "h: " << h << std::endl;
    dw = new Fl_Cairo_Window(w,h); 
    dw->label("Severely Obese");
    gb = new Fl_Box(0,200,512,384);
    gb ->image(new Fl_JPG_Image("obese.jpg"));
    return dw;
}
