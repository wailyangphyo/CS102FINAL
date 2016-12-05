#include "lab.h"
//extern Fl_Button * t;
//GifInfo g;

//extern Fl_Input * hi;   //test
//extern Fl_Input * wi; 	//test
Fl_Cairo_Window * ow;
Fl_Button * c;
Fl_Box * gb;
Fl_Output * st;
Fl_Value_Output * bm;
Fl_Output * hr;
Fl_Cairo_Window* makeOutWindow()
{
    ow = new Fl_Cairo_Window(600,600);
    ow->label("Window Label"); //Change This!
    ow->color(FL_CYAN);
    
    
    bm = new Fl_Value_Output(.2*w,.02*h,.25*w,.05*h, 
			   "Your BMI");
			   bm->color(FL_WHITE);
    bm->value(bmi.value);
   // std::cout<< bm << z << std::endl;
    //std::cout<< bm;
    st = new Fl_Output(.6*w,.02*h,.5*w,.05*h, "Status");
    st->value(bmi.status.c_str());
    
    hr = new Fl_Output(.2*w,.07*h,.92*w,.3*h, "Health Risks");
    hr->value(bmi.risk.c_str());
   
   
/////////////    
gb = new Fl_Box(0,150,512,384);
    std::string z = bmi.status;
 if (z == "Underweight"){
	gb -> image(new Fl_JPEG_Image("underweight.jpg"));
	
    } else if (z == "Normal (healthy weight)"){
	gb -> image(new Fl_JPEG_Image("healthyweight.jpg"));	
	
    } else if (z == "Overweight"){

	gb -> image(new Fl_JPEG_Image("overweight.jpg"));
	

    } else if (z == "Obese Class I (Moderately obese)"){

	gb -> image(new Fl_JPEG_Image("obese.jpg"));
	
	
    } else if (z == "Obese Class II (Severely obese)"){

	gb -> image(new Fl_JPEG_Image("obese.jpg"));
	
	
    } else if (z == "Obese Class III (Very severely obese)"){

	gb -> image(new Fl_JPEG_Image("morbidlyobese.jpg"));	
    } 
    
    
/////////////////////    
    c = new Fl_Button(.35*w,.85*h,.4*w,.05*h, 
			   "Celeberities Like You");
    c->callback((Fl_Callback*)cbCeleb);
    c->color(FL_WHITE);
    return ow;
}
    //p
    //p->value(round(pmt(r->value()/100,1000,12,5)));
