#include "Pilot.h"

//int Pilot::countID = 0;
	Pilot::Pilot(string pName, int pAge, string pGender) : Person(pName, pAge, pGender) //Inheritance
	{	// Starting flight hour
		flight_time = 0;
		// Once created they will have an ID
		ID = Person::ID;
	
	}


	void Pilot::set_flight_time(int Ptime)
	{	// Can set flight hour
		flight_time = Ptime;
	}

	void Pilot::add_flight_time(int Ptime)
	{	// Add flight time
		flight_time += Ptime;
	}

	// Example of polymorphism
	void Pilot::get_details()
	{	
		// Get all info of pilot
		cout<<"Pilot ID: "<<ID<<endl;
		Person::get_details();
		cout<<"Flight time: "<<flight_time<<" hours"<<endl;
	}


// bool Pilot::request_landing(Plane* name)
// {
// 	cout<<"Request landing for "<<name->callsign<<" has been sent."<<endl;
// 	return true;
// }
// bool Pilot::request_departuring(Plane* name)
// {
// 		cout<<"Request departuring for "<<name->callsign<<" has been sent."<<endl;
// 	return true;
// }




	Pilot::~Pilot()
	{
		cout<<"Pilot fired."<<endl;
	}