#include "Pilot.h"

int Pilot::ID = 0;

Pilot::Pilot()
{
	flight_time = 0;
}

Pilot::Pilot(string pName, int pAge, string pGender)
{
	ID ++;
	name = pName;
	age = pAge;
	gender = pGender;
}

void Pilot::set_flight_time(int time)
{
	flight_time = time;
}


void Pilot::add_flight_time(int time)
{
	flight_time += time;
}

void Pilot::get_details()
{
	cout<<"Name: "<<name<<endl;
	cout<<"Age: "<<age<<endl;
	cout<<"Gender: "<<gender<<endl;
	cout<<"Flight time: "<<flight_time<<endl;
	
}


Pilot::~Pilot()
{
	cout<<name<<" is no longer a pilot."<<endl;
}