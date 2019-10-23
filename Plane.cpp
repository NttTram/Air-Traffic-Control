#include "Plane.h"

	int Plane::PlaneID = 0;


	Plane::Plane(string pName, string callSign, int maxPassenger)
	{ // Declaring variables
		name = pName;
		callsign = callSign;
		max_passenger = maxPassenger;
		current_passenger = 0;
	}

	void Plane::set_destination(string pDestination, string pFrom)
	{ 	// Setting destination and location
		destination = pDestination;
		from = pFrom;
	}
	

	void Plane::set_pilot(Pilot* Pcaptain, Pilot* copilot)
	{	// Plane must have 2 pilots.
		captain = Pcaptain;
		coPilot = copilot;
	}


	// void Plane::set_copilot(Pilot* copilot)
	// {
	// 	coPilot = copilot;
	// }


	void Plane::set_passenger(int passenger)
	{  // Checking that there will be enough seats,
		if (passenger < max_passenger)
		{
			current_passenger = passenger;
		}
		else 
		{	// When too many passenger. So not all will be on
			cout<<"The number of passengers exceeded the plane's seat capacity."<<endl;
			cout<<"Therefore "<< passenger-max_passenger<<" passengers cannot board the plane."<<endl;
			cout<<endl;
			
			current_passenger = max_passenger;
		}
	}

	void Plane::get_details()
	{	// All info of plane
		cout<<"Plane name: "<<name<<endl;
		cout<<"Call sign: "<<callsign<<endl;
		cout<<"Pilot: "<<captain->name<<endl;
		cout<<"CoPilot: "<<coPilot->name<<endl;
		cout<<"No. of passenger on board: "<<current_passenger<<endl;
		cout<<"From: "<<from<<"                   "<<"To: "<<destination<<endl;
		cout<<endl;



	}

	void Plane::landing()
	{	
		cout<<name<<" is landing in "<<destination<<endl;
	}

	void Plane::departuring()
	{
		cout<<name<<" is departuring to "<<destination<<endl;
	}


	Plane::~Plane()
	{
		cout<<"Plane "<<name<<" is destroyed"<<endl;

	}