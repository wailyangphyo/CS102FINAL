#include "lab.h"
Fl_Cairo_Window * cw;
Fl_Input * hi;
Fl_Input * wi;
Fl_Button * b;
Fl_Box * t;
Fl_Cairo_Window* makeYourBMIWindow()
{
    cw = new Fl_Cairo_Window(width,height);
    cw->label("BMI Search");
    cw->color(FL_CYAN);
    wi = new Fl_Input(.25*width,.5*height,.25*width,.1*height, 
			   "Weight");
    hi = new Fl_Input(.25*width,.70*height,.25*width,.1*height, 
			    "Height");
    t = new Fl_Button(.25*width,.85*height,.25*width,.1*height, 
			   "Calculate");
    t = new Fl_Box(.05*width,.05*height,128,128);
    t->image(new Fl_PNG_Image("input.png"));
    b = new Fl_Button(.65*width,.60*height,.25*width,.1*height, 
			   "Celeberities");
    b->color(FL_WHITE);
    return cw;
}
