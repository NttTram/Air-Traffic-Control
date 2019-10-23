#ifndef AIRPORT_H
#define AIRPORT_H

#include <string>
#include <iostream>
#include "Pilot.h"
#include "Plane.h"
#include "AirController.h"
#include <vector>
using namespace std;

class Airport

{

public:
	Airport();
	Airport(int Mgate, int Mrunway, string name, string location);
	string Name;
	string Location;
	int Gate;
	int Runway;
	
	int max_gate;
	int max_runway;
	int countPilot;
	int countPlane;
	int countController;



	vector <Plane*> planes;
	vector <Pilot*> pilots;
	vector <AirController*> controller;

	void get_airport_details();
	void get_pilot(Pilot* pil);
	void get_plane(Plane* name);
	void add_air_controller(AirController* aircon);
	

	


	~Airport();

};

#endif