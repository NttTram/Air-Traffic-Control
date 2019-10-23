#ifndef PILOT_H
#define PILOT_H

#include <string>
#include <iostream>
#include "Person.h"
// #include "Plane.h"
#include <vector>
using namespace std;

class Pilot: virtual public Person
{
	

public:

	Pilot(string pName, int pAge, string pGender);
	int ID;
	
	 int flight_time; //hours
	

	void set_flight_time(int Ptime);

	void add_flight_time(int Ptime);
	void get_details();

	// bool request_landing(Plane* name);
	// bool request_departuring(Plane* name);


	~Pilot();
	
};

#endif