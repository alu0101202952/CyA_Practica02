erathostenes: /src/main.o /src/erathostenes.o
	g++ /src/main.o /src/erathostenes.o -o erathostenes

/src/erathostenes.o: erathostenes.cc ../include/erathostenes.h
	g++ -c -Wall erathostenes.cc

/src/main.o: main.cc
	g++ -c -Wall main.cc

clean:
	rm *.o erathostenes