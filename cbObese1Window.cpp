#include "lab.h"
extern Fl_Cairo_Window * ow;
void cbObese1Window(Fl_Button*,void*)
{
    if(ow) ow->hide();
    makeOutWindow()->show();

}
