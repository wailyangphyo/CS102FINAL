#include "lab.h"
Fl_Cairo_Window * cw;
Fl_Input * hi; //height in 
Fl_Input * wi; //weight in
Fl_Button * b;
Fl_Box * ii;
Fl_Cairo_Window* makeSearchWindow()
{
    cw = new Fl_Cairo_Window(width,he);
    cw->label("BMI Calculator");
    cw->color(FL_GREEN);
    hi = new Fl_Input(.7*width,.25*height,.25*width,.1*height, 
			   "Height in Inches");
    wi = new Fl_Input(.7*width,.5*height,.25*width,.1*height, 
			   "Weight in Pounds");
    b = new Fl_Button(.57*width,.75*height,.25*width,.1*height, 
			   "Calculate");
    //b->callback(( Fl_Callback * ) cbGetInfo);
    //b->color(FL_WHITE);
    ii = new Fl_Box(.05*width,.05*height,128,128);
    ii->image(new Fl_PNG_Image("input.png"));
    return cw;
}
