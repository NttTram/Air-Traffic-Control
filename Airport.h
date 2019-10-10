#ifndef AIRPORT_H
#define AIRPORT_H

#include <string>
#include <iostream>
#include "Pilot.h"
#include "Plane.h"
using namespace std;

class Airport

{

public:
	Airport();
	Airport (int Mgate, int Mrunway, string name, string location);
	string Name;
	string Location;
	int Gate;
	int Runway;
	Plane* planes[6];
	Pilot* pilots[12];
	int max_gate;
	int max_runway;
	int count;

	void get_plane_detail(Plane* name);

	
	bool gate_availability();

	bool runway_availability();

	~Airport();
};

#endif