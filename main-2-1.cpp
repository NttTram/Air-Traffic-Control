#include "Plane.h"
#include "Pilot.h"


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



delete James; 
delete Nora; 
delete Hawk01;
return 0;



}