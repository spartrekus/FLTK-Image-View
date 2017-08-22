

all: 
	   fltk-config --use-images --compile flpicview.cxx 

run:
	g++ -L/usr/local/lib -lfltk -lXext -lX11 -lm  "flpicview.cxx"  -o file.out 
