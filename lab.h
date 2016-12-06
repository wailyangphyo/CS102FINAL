#include <iostream>
#include <string>
#include <cstdlib>
#include <config.h>
#include <FL/Fl_Cairo_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_GIF_Image.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Value_Input.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_Value_Output.H>
#include <FL/Fl_Multiline_Output.H>
#include <cairo-xlib.h>
#include <FL/Fl_PNG_Image.H>
#include <FL/Fl_Text_Display.H>


#include <FL/Fl_JPEG_Image.H>

void stopAnimation ();
struct BMIInfo
{
    std::string status, risk;
    double value;
};
extern BMIInfo bmi;

Fl_Cairo_Window* makeOutWindow();
Fl_Cairo_Window* CelebWindow();

extern Fl_Input * wi;
extern Fl_Input * hi;
extern Fl_Cairo_Window * cw;
extern Fl_Button * t;
extern Fl_Button * c;
extern Fl_Cairo_Window * dw;
extern Fl_Box * gb;
extern Fl_Cairo_Window * ow;
extern Fl_Cairo_Window * b;

extern Fl_Output * st;
extern Fl_Value_Output * bm;
extern Fl_Text_Display * hr;
extern Fl_Box * cb;


void stopAnimation();
BMIInfo getAPIInfo();
std::string searchAPI(std::string,std::string);
Fl_Cairo_Window* makeInputWindow();
const int w = 512;
const int h = 600;
Fl_Cairo_Window* obese1(int w,int h);
Fl_Cairo_Window* obese2(int w,int h);
Fl_Cairo_Window* healthy(int w,int h);
Fl_Cairo_Window* under(int w,int h);
Fl_Cairo_Window* over(int w,int h);
void makeOutWindow(Fl_Button*,void*);
void cbCeleb(Fl_Button*,void*);

void cbUnderWindow(Fl_Button*,void*);
void cbHealthyWindow(Fl_Button*,void*);
void cbOverWindow(Fl_Button*,void*);
void cbObese1Window(Fl_Button*,void*);
void cbObese2Window(Fl_Button*,void*);
void cbObese3Window(Fl_Button*,void*);


//Fl_Cairo_Window* makeDisplayWindow();
//void cbDisplay(Fl_Button*, void*);

