#include <iostream>
#include <string>
#include <cstdlib>
#include <config.h>
#include <FL/Fl_Cairo_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_GIF_Image.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_JPG_Image.H>
void stopAnimation ();
struct APIInfo
{
    std::string url;
    int wi;
    int hi;
};
extern APIInfo g;
void stopAnimation();
APIInfo getAPIInfo(std::string);
std::string searchAPI(std::string);
Fl_Cairo_Window* makeYourBMIWindow();
Fl_Cairo_Window* makeDisplayWindow();
void cbDisplay(Fl_Button*, void*);
const int width = 512;
const int height = 600;
extern Fl_Box* gb;
extern Fl_Cairo_Window * dw;
extern Fl_Input * wi; //input window
extern Fl_Input * hi; //input window
extern Fl_Box* ii; //input window
std::string searchAPI(std::string wi,std::string hi);
struct BMIinfo
{
    std::string value;
    std::string status;
    std::string risk;
};
extern BMIinfo b;
