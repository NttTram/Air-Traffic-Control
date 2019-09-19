#ifndef PILOT_H
#define PILOT_H

#include <string>
#include <iostream>

using namespace std;

class Pilot
{
	

public:
	Pilot();
	Pilot(string pName, int pAge, string pGender);

	static int ID;

	string name;
	int age;
	int flight_time; //hours
	string gender;

	void set_flight_time(int time);

	void add_flight_time(int time);

	void get_details();


	~Pilot();
	
};

#endif