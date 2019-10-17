output: Program.o Plane.o Pilot.o Airport.o
	g++ Program.o Plane.o Pilot.o Airport.o -o output

Program.o: Program.cpp 
	g++ -c Program.cpp 

Plane.o: Plane.cpp Plane.h
	g++ -c Plane.cpp Plane.h

Pilot.o: Pilot.cpp Pilot.h
	g++ -c Pilot.cpp Pilot.h

Airport.o: Airport.cpp Airport.h
	g++ -c Airport.cpp Airport.h

clean: 
	rm *.o output
