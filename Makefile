output: AirTraffic.o Pilot.o Airport.o Person.o AirController.o Plane.o 
	g++ -std=c++11 AirTraffic.o Pilot.o Airport.o Person.o AirController.o Plane.o -o output 

main.o: AirTraffic.cpp
	g++ -std=c++11 -c AirTraffic.cpp

Pilot.o: Pilot.cpp Pilot.h
	g++ -c Pilot.cpp Pilot.h

Person.o: Person.cpp Person.h
	g++ -c Person.cpp Person.h

Airport.o: Airport.cpp Airport.h
	g++ -c Airport.cpp Airport.h

AirController.o: AirController.cpp AirController.h
	g++ -c AirController.cpp AirController.h

Plane.o: Plane.cpp Plane.h
	g++ -c Plane.cpp Plane.h

CXXFLAGS += -std=c++11


clean:
	rm *.o output