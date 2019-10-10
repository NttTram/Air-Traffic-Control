#include "Plane.h"
#include "Pilot.h"
#include "Airport.h"

int main()
{
	Pilot *James = new Pilot("James", 28, "Male");
	Pilot *Nora = new Pilot("Nora", 26, "Female");
	Plane *Hawk01 = new Plane("Hawk01", "HWK1", 20);
	Hawk01->set_passenger(23);
	Hawk01->set_destination("Syndey", "Adelaide");
	Hawk01->set_pilot(Nora);
	Hawk01->set_copilot(James);
	Hawk01->get_details();


	Airport * Adelaide = new Airport (6, 2, "Adelaide Airport", "South Australia" );
	Airport * sydney = new Airport (8, 4, "Sydney Airport", "New South Wales" );
	sydney->get_plane_detail(Hawk01);
	if(sydney->gate_availability() == true)
	{
		cout<<"there are "<<(sydney->max_gate - sydney->Gate)<<" gates availble."<<endl;

	}
	else{
		cout<<" No gates are availble"<<endl;
	}
	if(sydney->runway_availability() == true)
	{
		cout<<"There are "<<sydney->max_runway - sydney->Runway<<" runways availble."<<endl;

	}
	else{
		cout<<" No runways are availble"<<endl;
	}
	
	return 0;

}