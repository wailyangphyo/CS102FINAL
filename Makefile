objs = main.o getAPIInfo.o searchAPI.o \
		makeInputWindow.o makeOutWindow.o \
		findCorrectWindow.o cbCeleb.o CelebWindow.o
		
		
FLTKCXXFLAGS = `fltk-config --cxxflags --use-cairo --use-images`
FLTKLDFLAGS = `fltk-config --ldflags --use-cairo --use-images`
CXXFLAGS = -std=c++11 -g -I /home/debian/fltk-1.3.3 ${FLTKCXXFLAGS}
LDFLAGS = -lcurl ${FLTKLDFLAGS}
lab: ${objs} lab.h
	g++ ${CXXFLAGS} -o lab ${objs} ${LDFLAGS}

doc: lab.tex ${objs:.o=.cpp}
	for f in ${objs:.o=}; do \
		lgrind -i -o $$f.tex $$f.cpp; \
	done
	
	lgrind -i -o labheader.tex lab.h
	
	latex lab.tex
	dvips lab.dvi
	ps2pdf lab.ps
