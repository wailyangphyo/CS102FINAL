#include "lab.h"
BMIInfo bmi;
void findCorrectWindow(Fl_Button*,void*)
{    
   // std::cout<< wi->value() << hi->value() << std::endl; 
    bmi = getAPIInfo(); //pass in height and weight values later
   if(ow) ow->hide();
    makeOutWindow()->show();
    
    //youll get back data from your equivalent to getGifInfo;
    // it will be stored in a struct. you will check the data in that struct for specific conditions, 
    // and make new strings for each condition, and a string that repsesnts the names of your jpeg files. 
    //pass those strings according to the conditions met to the makeDisplayWindow function, and then in that function
    //you can output them. 
    //dont return in same function. use struct
   /*
    if (z == "Underweight"){
	under(w,h)->show();
	dw = new Fl_Cairo_Window(w,h);
	dw->label("Underweight BMI");
	gb = new Fl_Box(0,150,512,384);
	gb -> image(new Fl_JPG_Image("underweight.jpg"));
	return dw;
	
    } else if (z == "Normal (healthy weight)"){
	healthy(w,h)->show();
	dw = new Fl_Cairo_Window(w,h);
	dw->label("Normal (Healthy)");
	gb = new Fl_Box(0,150,512,384);
	gb -> image(new Fl_JPG_Image("healthyweight.jpg"));
	
	
    } else if (z == "Overweight"){
	over(w,h)->show();
	dw = new Fl_Cairo_Window(w,h);
	dw->label("Overweight BMI");
	gb = new Fl_Box(0,150,512,384);
	gb -> image(new Fl_JPG_Image("overweight.jpg"));
	

    } else if (z == "Obese Class I (Moderately obese)"){
	obese1(w,h)->show();
	dw = new Fl_Cairo_Window(w,h);
	dw->label("Obese Class I BMI");
	gb = new Fl_Box(0,150,512,384);
	gb -> image(new Fl_JPG_Image("obese.jpg"));
	
	
    } else if (z == "Obese Class II (Severely obese)"){
	obese1(w,h)->show();
	dw = new Fl_Cairo_Window(w,h);
	dw->label("Obese Class II BMI");
	gb = new Fl_Box(0,150,512,384);
	gb -> image(new Fl_JPG_Image("obese.jpg"));
	
	
    } else if (z == "Obese Class III (Very severely obese)"){
	obese2(w,h)->show();
	dw = new Fl_Cairo_Window(w,h);
	dw->label("Obese Class III BMI");
	gb = new Fl_Box(0,150,512,384);
	gb -> image(new Fl_JPG_Image("morbidlyobese.jpg"));
	
    } 
	return dw;
*/
}
