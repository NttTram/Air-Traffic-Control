#include <iostream>
#include <string>
#include "Airport.h"
#include "Pilot.h"
#include "Plane.h"


	Airport::Airport()
	{
		
	}
	Airport::Airport(int Mgate, int Mrunway, string name, string location)
	{
		// Declaring variables
		Name = name;
		Location = location;
		Gate = 0;
		Runway = 0; 
		countPilot = 0;
		countPlane = 0;
		countController = 0;
		max_gate = Mgate;
		max_runway = Mrunway;

		planes.reserve(Mgate); // Give vector a size
		pilots.reserve(Mgate * 2); // Give vector a size
	}
	void Airport::get_plane(Plane* name)
	{
			// Search the system to check if the plane exist in the system already or not
		for(int i = 0; i < countPlane; i++)
		{
			if (planes[i] == name)
			{
				cout<<"Air controller already exist in the system."<<endl;
				return; // End the function if they exist
			}
		}

			 // Add Plane to vector
			planes.push_back(name);
			countPlane++;	// Count increase for each plane added

			// If the plane have pilots. Add them to the airport too
			if(name->captain != NULL && name->coPilot != NULL)
			{
				// Adding pilots
				pilots.push_back(name->captain); 
				countPilot++; // Increase count
				pilots.push_back(name->coPilot);
				countPilot++; 

				cout<<"Pilots in the plane is also added into the system."<<endl;
			}
			// This take up one gate
			Gate++; 
			// Get info of the plane
			name->get_details();
			cout<<"Plane added into the airport of "<<Name<<endl;

	}

	void Airport::get_pilot(Pilot* pil)
	{	// Search the system to check if pilot exist in the system already or not
		for(int i = 0; i < countPilot; i++)
		{
			if (pilots[i] == pil)
			{
				cout<<"Pilot already exist in the system."<<endl;
				return; // End the function if they exist
			}
		}
		// If not in the system then add the pilot
			pilots.push_back(pil);
			countPilot++;// Increase count
			pil->get_details(); // Get pilot info
			cout<<"Pilot added into the airport of "<<Name<<endl;
	
	}

	void Airport::get_airport_details()
	{	// Function with all info of Airport
		cout<<"Airport name: "<<Name<<endl;
		cout<<"Gates: "<<max_gate<<endl;
		cout<<"Runways: "<<max_runway<<endl;
		cout<<"Number of planes in the airport: "<<countPlane<<endl;
		cout<<"Number of pilots in the airport: "<<countPilot<<endl;
		cout<<"Number of air traffics controller in the airport: "<<countController<<endl;
	}

	void Airport::add_air_controller(AirController* aircon)
	{	// Search the system to check if air controller exist in the system already or not
		for(int i = 0; i < countController; i++)
		{
			if (controller[i] == aircon)
			{
				cout<<"Air controller already exist in the system."<<endl;
				return; // End the function if they exist
			}
		}

		// Add Air controller
		controller.push_back(aircon);
		cout<<"An air traffic controller is added into the "<<Name<<" airport."<<endl;
		countController++; // Increase count
	}




	Airport::~Airport()
	{
		cout<<"Airport is destroyed."<<endl;
	}


