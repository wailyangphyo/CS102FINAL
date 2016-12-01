#include "lab.h"

std::string findCorrectWindow(Fl_button*, void*)
{
    std::cout<< wi->value() << hi->value() << std::endl; 
    searchAPI(wi,hi)
    
    //how to call function??
    if (b.status == "Underweight"){
	cbUnderWindow()->show();
    } else if (b.status == "Normal (healthy weight)"){
	cbHealthyWindow()->show();
    } else if (b.status == "Overweight"){
	cbOverWindow()->show();
    } else if (b.status == "Obese Class I (Moderately obese)"){
	cbObese1Window()->show();
    } else if (b.status == "Obese Class II (Severely obese)"){
	cbObese2Window()->show();
    } else if (b.status == "Obese Class III (Very severely obese)"){
	cbObese3Window()->show();
    } 
	
}
