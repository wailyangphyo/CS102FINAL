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
Fl_Text_Display * hr;
Fl_Cairo_Window* makeOutWindow()
{
    ow = new Fl_Cairo_Window(650,650);
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
    
    hr = new Fl_Text_Display(.2*w,.1*h,.92*w,.07*h, "Health Risks");
    hr->buffer(new Fl_Text_Buffer());
    hr->buffer()->text(bmi.risk.c_str());
   
   
/////////////    
gb = new Fl_Box(69,150,512,384);
    std::string z = bmi.status;
 if (z == "Severely underweight"){
	gb -> image(new Fl_JPEG_Image("u.jpg"));
    } else if (z == "Underweight"){
	gb -> image(new Fl_JPEG_Image("u.jpg"));
	
    } else if (z == "Normal (healthy weight)"){
	gb -> image(new Fl_JPEG_Image("h.jpg"));	
	
    } else if (z == "Overweight"){

	gb -> image(new Fl_JPEG_Image("ov.jpg"));
	

    } else if (z == "Obese Class I (Moderately obese)"){

	gb -> image(new Fl_JPEG_Image("o1.jpg"));
	
	
    } else if (z == "Obese Class II (Severely obese)"){

	gb -> image(new Fl_JPEG_Image("o1.jpg"));
	
	
    } else if (z == "Obese Class III (Very severely obese)"){

	gb -> image(new Fl_JPEG_Image("o2.jpg"));	
    } 
    
    
/////////////////////    
    c = new Fl_Button(.46*w,.95*h,.4*w,.05*h, 
			   "Celeberities Like You");
    c->callback((Fl_Callback*)cbCeleb);
    c->color(FL_WHITE);
    return ow;
}
    //p
    //p->value(round(pmt(r->value()/100,1000,12,5)));
