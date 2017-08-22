 
// COMPILE: fltk-config --use-images --compile load-jpeg.cxx
// http://seriss.com/people/erco/fltk/
 
#include <stdio.h>
#include <stdlib.h>
#include <FL/Fl.H>
#include <FL/Fl_Shared_Image.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Scroll.H>
#include <FL/Fl_JPEG_Image.H>
#include <FL/Fl_Box.H>

// #define JPGFILE "/var/tmp/foo.jpg"
// Show a jpg image in a scrolled window - erco 05/07/2005

int main( int argc, char *argv[])
{

    if ( argc == 2)
      if ( strcmp( argv[1] , "" ) !=  0 ) 
      {
         printf( "View: %s\n", argv[ 1 ] );
    fl_register_images();
    Fl_Double_Window win(800,600);
    Fl_Scroll scr(0,0,800,600);

    Fl_JPEG_Image jpg( argv[ 1 ] );

    if ( jpg.h() == 0 ) { perror(  argv[ 1 ]  ); exit(1); }    // error check
    Fl_Box box(0,0,jpg.w(),jpg.h());
    box.image(jpg);
    win.resizable(win);
    win.show();
    return(Fl::run());
    }
    return 0;
}

    
