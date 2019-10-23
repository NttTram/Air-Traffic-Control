#ifndef AIRCONTROLLER_H
#define AIRCONTROLLER_H

#include "Person.h"
#include "Plane.h"
// #include "Testing.h"


#include <string>
#include <vector>
using namespace std;

class Airport;

class AirController :  virtual public Person
{
	


public:
	Airport *airport;
	AirController(string pName, int pAge, string pGender);
	int ID;
	

	void set_airport(Airport *port);
	void get_details();

	bool gate_availability(Airport *port);
	bool runway_availability(Airport *port);

	bool allow_landing(Plane* name, Airport *landingPort);
	bool allow_departure(Plane* name, Airport *departuringPort);
	


	~AirController();
	
};


#endif