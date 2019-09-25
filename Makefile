output: main-3-1.o Plane.o Pilot.o Airport.o
	g++ main-3-1.o Plane.o Pilot.o Airport.o -o output

main-3-1.o: main-3-1.cpp 
	g++ -c main-3-1.cpp 

Plane.o: Plane.cpp Plane.h
	g++ -c Plane.cpp Plane.h

Pilot.o: Pilot.cpp Pilot.h
	g++ -c Pilot.cpp Pilot.h

Airport.o: Airport.cpp Airport.h
	g++ -c Airport.cpp Airport.h

clean: 
	rm *.o output