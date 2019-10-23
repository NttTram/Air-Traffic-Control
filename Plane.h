#ifndef PLANE_H
#define PLANE_H

#include "Pilot.h"

#include <string>
#include <istream>

using namespace std;

class Plane
{
public:

	Plane(string pName, string callSign, int maxPassenger);

	int static PlaneID;

	string name;
	string callsign;
	int max_passenger;
	int current_passenger;

	Pilot *captain, *coPilot;

	string destination;
	string from;

	void set_pilot(Pilot* Pcaptain, Pilot* copilot);
	// void set_copilot(Pilot* copilot);

	void set_passenger(int passenger);

	void set_destination(string pDestination, string pFrom);

	void get_details();

	void landing();
	void departuring();

	~Plane();
	
};

#endif