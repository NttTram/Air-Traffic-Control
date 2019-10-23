#include "AirController.h"
#include "Airport.h"
	
	AirController::AirController(string pName, int pAge, string pGender) : Person(pName, pAge, pGender)
	{
		ID = Person::ID;
		
	
	}

	void AirController::set_airport(Airport* port)
	{
		airport = port;
		cout<<"Air controller is a part of airport "<<port->Name<<endl;
	}


	bool AirController::gate_availability(Airport* port)
	{
		if (port->Gate < port->max_gate)
		{
			cout<<"Gates available: "<<(port->max_gate - port->Gate)<<endl;
			return true;
		}else
		{	cout<<"Gates are full."<<endl;
			return false;
		}
	}

	bool AirController::runway_availability(Airport* port)
	{
	if (port->Runway < port->max_runway)
		{	cout<<"Runways available: "<<(port->max_runway - port->Runway)<<endl;
			return true;
		}else
		{	cout<<"Runways are occuppied."<<endl;
			return false;
		}
	
	}



	bool AirController::allow_landing(Plane* name, Airport *landingPort)
	{
		cout<<"Plane: "<<name->callsign<<" landing request is accepted to land in "<<landingPort->Name<<" airport."<<endl;
		

		return true;
	}
	bool AirController::allow_departure(Plane* name, Airport *departuringPort)
	{
		cout<<"Plane: "<<name->callsign<<" departuring request is accepted to departure from "<<departuringPort->Name<<" airport."<<endl;
	

		return true;
	}

	void AirController::get_details()
	{
		
		cout<<"Air Controller ID: "<<ID<<endl;
		Person::get_details();
	}


	AirController::~AirController()
	{
		cout<<"Air Controller is fired."<<endl;
	}
