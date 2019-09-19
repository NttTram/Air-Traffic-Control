#include "Pilot.h"



int main()
{
	Pilot *James = new Pilot("James", 28, "Male");



	James->get_details();

	James->set_flight_time(50);
	James->get_details();
	James->add_flight_time(3);
	James->get_details();

	delete James;

	return 0;
}