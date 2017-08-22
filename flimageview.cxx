#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Shared_Image.H>
#include <FL/Fl_JPEG_Image.H>
#include <FL/Fl_Box.H>
// COMPILE: fltk-config --use-images --compile load-jpeg.cxx

int main() {
    fl_register_images();                       // initialize image lib
    Fl_Window     win(1100,1300);                 // make a window
    Fl_Box        box(10,10,1100-20,1300-20);     // widget that will contain image
    Fl_JPEG_Image jpg("penguin.jpg");      // load jpeg image into ram
    box.image(jpg);                             // attach jpg image to box
    win.show();
    return(Fl::run());
} 
    
