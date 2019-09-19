#include "Plane.h"

	int Plane::PlaneID = 0;

	Plane::Plane()
	{
		current_passenger = 0;
		fuel = 100; //100% fuel
	}


	Plane::Plane(string pName, string callSign, int maxPassenger)
	{
		name = pName;
		callsign = callSign;
		max_passenger = maxPassenger;
	}

	void Plane::set_destination(string pDestination, string pFrom)
	{
		destination = pDestination;
		from = pFrom;
	}
	

	void Plane::set_pilot(Pilot *captain)
	{
		pilot = captain;
	}


	void Plane::set_copilot(Pilot *copilot)
	{
		coPilot = copilot;
	}


	void Plane::set_passenger(int passenger)
	{
		if (passenger < max_passenger)
		{
			current_passenger = passenger;
		}
		else 
		{
			cout<<"The number of passengers exceeded the plane's seat capacity."<<endl;
			cout<<"Therefore "<< passenger-max_passenger<<" passengers cannot board the plane."<<endl;
			cout<<endl;
			
			current_passenger = max_passenger;
		}
	}

	void Plane::get_details()
	{
		cout<<"Plane name: "<<name<<endl;
		cout<<"Call sign: "<<callsign<<endl;
		cout<<"Pilot: "<<pilot->name<<endl;
		cout<<"CoPilot: "<<coPilot->name<<endl;
		cout<<"No. of passenger on board: "<<current_passenger<<endl;
		cout<<"From: "<<from<<"                   "<<"To: "<<destination<<endl;
		cout<<endl;



	}



	Plane::~Plane()
	{
		cout<<"Plane "<<name<<" is destroyed"<<endl;

	}