#include <iostream>
#include <string>
#include "Airport.h"
#include "Pilot.h"
#include "Plane.h"


	
Airport::Airport(int Mgate, int Mrunway, string name, string location)
{
	Name = name;
	Location = location;
	Gate = 0;
	Runway = 0;
	count = 0;
	max_gate = Mgate;
	max_runway = Mrunway;
}
void Airport::get_plane_detail(Plane* name)
	{
		count++; //count is now 1
		pilots[count] = name->pilot;
		count++;
		pilots[count] = name->coPilot;

		cout<<"Pilots: "<<endl;

		for(int i = 1; i < count+1; i++)
		{
			cout<< pilots[i]->name<<endl;
		}
	}

	bool Airport::gate_availability()
	{
		if (Gate < max_gate)
		{
			return true;
		}else
		{
			return false;
		}
	}

	bool Airport::runway_availability()
	{
	if (Runway < max_runway)
		{
			return true;
		}else
		{
			return false;
		}
	}
	Airport::~Airport()
	{

	}


