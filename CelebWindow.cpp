#include "lab.h"
Fl_Cairo_Window * cw;
Fl_Box * le;
Fl_Cairo_Window* makeUnderweightWindow(int width, int height);
{
  cw = new Fl_Cairo_Window(width,height);
  cw->label("UnderweightWindow";
  le = new Fl_Box(0,0,width,height);
  le->image(new
}
Fl_Cairo_Window * rm;
Fl_Box * jp;
Fl_Cairo_Window* makeHealthyWindow(int width, int height);
{
  rm = new Fl_Cairo_Window(width,height)l 
  rm->label("HealthyWindow");
  jp = new Fl_Box(0,0,width,height);
  jp->image(new
}
Fl_Cairo_Window * sb;
Fl_Box * rl;
Fl_Cairo_Window* makeOverweightWindow(int width, int height);
{
  sb = new Fl_Cairo_Window(width,height); 
  sb->label("OverweightWindow");
  rl = new Fl_Box(0,0,width,height); 
  rl->image(new
}
Fl_Cairo_Window * pm;
Fl_Box * sm;
Fl_Cairo_Window* makeUnderweightWindow(int width, int height);
{
  pm = new Fl_Cairo_Window(width,height);
  pm->label("ObeseWindow");
  sm = new Fl_Box(0,0,width,height);
  sm->image(new
}
