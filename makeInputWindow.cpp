#include "lab.h"
Fl_Cairo_Window * cw;
Fl_Input * in;
Fl_Input * lb;
Fl_Button * b;
Fl_Cairo_Window* makeSearchWindow()
{
    cw = new Fl_Cairo_Window(width,height);
    cw->label("BMI Calculator");
    cw->color(FL_GREEN);
    in = new Fl_Input(.7*width,.25*height,.25*width,.1*height, 
			   "Height in Inches");
    lb = new Fl_Input(.7*width,.5*height,.25*width,.1*height, 
			   "Weight in Pounds");
    b = new Fl_Button(.57*width,.75*height,.25*width,.1*height, 
			   "Calculate");
    b->callback(( Fl_Callback * ) cbGetInfo);
    b->color(FL_WHITE);
    return cw;
}
