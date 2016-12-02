#include <iostream>
#include <string>
#include <cstdlib>
#include <config.h>
#include <FL/Fl_Cairo_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_GIF_Image.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_JPEG_Image.H>
Fl_Cairo_Window* makeInputWindow();
void cbDisplay(Fl_Button*, void*);
const int w= 512; //width of output boxes
const int h = 600; //height of output boxes
Fl_Cairo_Window* cbUnderWindow();
extern Fl_Box* ii; //input image
extern Fl_Cairo_Window * dw;
extern Fl_Input * winput; //width input
extern Fl_Input * hinput; //height input 
struct BMIinfo
{
    std::string value;
    std::string status;
    std::string risk;
};
extern BMIinfo b;
std::string searchAPI(std::string wi,std::string hi);
BMIinfo getAPIInfo();
