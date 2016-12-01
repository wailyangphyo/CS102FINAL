#include "lab.h"
extern Fl_Cairo_Window * ow;
void cbOverWindow(Fl_Button*,void*)
{
    if(ow) ow->hide();
    makeOutWindow()->show();

}
