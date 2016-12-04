#include "lab.h"
void makeOutWindow(Fl_Button*,void*);
Fl_Cairo_Window * cw;
Fl_Input * hi;
Fl_Input * wi;
Fl_Button * t;
Fl_Cairo_Window* makeInputWindow()
{
    const int w = 300;
    const int h = 400;
    cw = new Fl_Cairo_Window(w,h);
    
    cw->label("BMI Search");
    cw->color(FL_CYAN);
    wi = new Fl_Input(.33*w,.5*h,.45*w,.1*h, 
			   "Weight in lbs");
    hi = new Fl_Input(.33*w,.70*h,.45*w,.1*h, 
			    "Height in in");
	hi = hi*0.0254;
    t = new Fl_Button(.33*w,.85*h,.45*w,.1*h, 
			   "Calculate");
//    t = new Fl_Button(.05*width,.05*height,128,128);
 //   t->image(new Fl_PNG_Image("input.png"));
    t->callback((Fl_Callback*)cbUnderWindow);

    //cw->label("GIF Search");
    return cw;
}
