#include "lab.h"
Fl_Box * cb;
Fl_Cairo_Window * b;

Fl_Cairo_Window* CelebWindow()

{
    
    b = new Fl_Cairo_Window(600,600);
    b->label("Window Label"); //Change This!
    b->color(FL_CYAN);
    {
   
    cb = new Fl_Box(0,0,600,600);
    std::string z = bmi.status;
    std::cout << "celeb window:" << z << std::endl;
    if (z == "Underweight"){
	cb->image(new Fl_JPEG_Image("underweight.jpg"));
    } 
    else if (z == "Normal (healthy weight)"){
	cb -> image(new Fl_JPEG_Image("healthy.jpg"));	
    } 
    else if (z == "Overweight"){

	cb -> image(new Fl_JPEG_Image("overweight.jpg"));
    } 
    else if (z == "Obese Class I (Moderately obese)"){
	cb -> image(new Fl_JPEG_Image("obese1.jpg"));
    } 
    
    else if (z == "Obese Class II (Severely obese)"){

	cb -> image(new Fl_JPEG_Image("obese1.jpg"));
	
	
    } 
    else if (z == "Obese Class III (Very severely obese)"){

	cb -> image(new Fl_JPEG_Image("obese2.jpg"));	
    } 
    }
    return b;
}
    
