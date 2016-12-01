#include "lab.h"

std::string findCorrectWindow(Fl_button*, void*)
{
    std::cout<< wi->value() << hi->value() << std::endl; 
    searchAPI(wi,hi)
    
    //how to call function??
    if (b.status == "Underweight"){
	makeUnderweightWindow()->show();
    } else if (b.status == "Normal (healthy weight)"){
	makeHealthyWindow()->show();
    } else if (b.status == "Overweight"){
	makeOverweightWindow()->show();
    } else if (b.status == "Obese Class I (Moderately obese)"){
	makeObese1Window()->show();
    } else if (b.status == "Obese Class II (Severely obese)"){
	makeObese2Window()->show();
    } else if (b.status == "Obese Class III (Very severely obese)"){
	makeObese3Window()->show();
    } 
	
}
