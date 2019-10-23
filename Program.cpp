#include <stdlib.h>
#include "Pilot.h"
#include "Plane.h"
#include "Airport.h"

#include <vector>
//#include "AirController.h"

int main()
{

	string empty; // For cin any value just to continue onto next page. Stops the clear from clearig all text until user read it.
	vector<Airport*> Port(5); // Vector of 5 Airport objects
	
	int A_gate, A_runway, portID = 0;
	int newPort;	// Boolean type. if true (1) then make new port if false (2) dont need to make new port
	string name, location;

	Port[portID] = new Airport (8, 4, "Sydney", "Sydney" ); // Declared an existing airport
	// portID ++;
	// Port[portID] = new Airport (8, 4, "Adelaide", "ADL" ); 

	// Layout of the welcome page
	cout<<" _______________________________________________________________________________________________________"<<endl<<"|						Welcome.						|"<<endl;
	cout<<"|				Please enter the name of the airport.					|"<<endl;
	//cout<<"|_													|"<<endl;
	cout<<"|_______________________________________________________________________________________________________|"<<endl;

cout<<endl<<"						";
cin>>name; //  Request to enter an Airport name.
	
	// Checking to see if the name entered is in the system
	for(int i = 0; i < 5; i++)
	{

		//cout<<"port: "<<Port[i]<<endl;
		// Checking for existing data from all the existing and empty spaces in the vector.
		if(Port[i] != NULL && Port[i]->Name != "\0"){
		
			// So, there exist a data and it now check to see if the name entered exist in the vector.
			portID = i; //set ID so if no data matches the name then when making a new port it can be added on the end when postID++;
			if(Port[i]->Name == name)
			{
			//	cout<<"			Airport exists."<<endl;
				newPort = 0; // newPort is false thus no need to make a new port.
				portID = i; // Set ID to the existing element. If 
				break; // Stop the if statement once found the data.
			}
			else
			{		
				newPort = 5-i;	// When loop through all and still no port found matching the name then it will become 1 (true)	
			}
		}else
		{	
			newPort = 5-i; // When loop through all and still no port found matching the name then it will become 1 (true)
		}
				
	}

	system("clear");
	// Making new airport
	if(newPort == 1)
	{	

	// portID++;
	// 	cout<<"PORT ID: "<<portID<<endl;
	cout<<"					The airport is new."<<endl<<" _______________________________________________________________________________________________________ "<<endl;
	cout<<"|				Please enter the following:						|"<<endl<<"|_______________________________________________________________________________________________________|"<<endl;
	cout<<"			Number of gates: ";
	cin >> A_gate; 
	//cout<<endl;

	cout<<"			Number of runways: ";
	cin>>A_runway;
	//cout<<endl;

	cout<<"			The airport location: ";
	cin>>location;
	//cout<<endl;

	Port[portID] = new Airport(A_gate, A_runway, name,location);

	system("clear");

	cout<<"				The new airport called "<<Port[portID]->Name<< " is added into the system."<<endl;
	cout<<"					To continue enter any keys."<<endl;
	cin>>empty;
	
	}

	system("clear");

	



		cout<<"					Welcome to the "<<Port[portID]->Name<<" airport."<<endl<<" _______________________________________________________________________________________________________"<<endl;
		cout<<"|				Please enter the following:						|"<<endl;

		cout<<"|		1. Pilot 		2. Plane  		3. Air Traffic Controller 		|"<<endl;
		cout<<"|_______________________________________________________________________________________________________|"<<endl;
		cout<<endl<<"					";


	
	bool valid;



	while (valid == false)
	{
		

		string Select;
		cin>>Select;
		cout<<"Select: "<<Select<<endl;
		if(Select == "1")
		{
		  	cout << "Pilot"<<endl; // prints "1",
	     	valid = true;

	

	// portID++;
	// 	cout<<"PORT ID: "<<portID<<endl;
	cout<<"					The Pilot is new."<<endl<<" _______________________________________________________________________________________________________ "<<endl;
	cout<<"|				Please enter the following:						|"<<endl<<"|_______________________________________________________________________________________________________|"<<endl;
	cout<<"			Pilot's name";
	cin >> pName; 
	//cout<<endl;

	cout<<"			Pilot's age";
	cin>>pAge;
	//cout<<endl;

	cout<<"			The Pilot's gender: ";
	cin>>pGender;
	//cout<<endl;

	Pilot[pilotID] = new Pilot(pName, pAge, pGender);

	system("clear");

	cout<<"				The Pilot is called "<<Pilot[pilotID]->pName<< " is added into the system."<<endl;
	cout<<"					To continue enter any keys."<<endl;
	cin>>empty;
	
	

	system("clear");

	//PLANE
	cout<<"					The Plane is new."<<endl<<" _______________________________________________________________________________________________________ "<<endl;
	cout<<"|				Please enter the following:						|"<<endl<<"|_______________________________________________________________________________________________________|"<<endl;
	cout<<"			Plane's name:";
	cin >> pName; 
	//cout<<endl;

	cout<<"			Plane's callsign:";
	cin>>callsign;
	//cout<<endl;

	cout<<"			The Plane's maxPassenger: ";
	cin>>maxPassenger;
	//cout<<endl;

	Plane[planeID] = new Plane(pName, callSign, maxPassenger);

	system("clear");

	cout<<"				The Plane is called "<<Plane[planeID]->pName<< " is added into the system."<<endl;
	cout<<"					To continue enter any keys."<<endl;
	cin>>empty;
	
	

	system("clear");


	//AIRCONTROLLER
	cout<<"					The AirController is new."<<endl<<" _______________________________________________________________________________________________________ "<<endl;
	cout<<"|				Please enter the following:						|"<<endl<<"|_______________________________________________________________________________________________________|"<<endl;
	cout<<"			AirController's name:";
	cin >> pName; 
	//cout<<endl;

	cout<<"			AirController's age:";
	cin>>pAge;
	//cout<<endl;

	cout<<"			The AirController's gender ";
	cin>>pGender;
	//cout<<endl;

	AirController[AircontrollerID] = new AirController(pName, pAge, pGender);

	system("clear");

	cout<<"				The AirController is called "<<AirController[aicontrollerID]->pName<< " is added into the system."<<endl;
	cout<<"					To continue enter any keys."<<endl;
	cin>>empty;
	
	

	system("clear");













		}
		else if( Select == "2")
		{
	    	cout << "Plane"<<endl; // then prints "2"
	    	valid = true;
		}
		else if(Select == "3")
		{
			cout<< "Air Traffic Controller"<<endl;
			valid = true;
		}
		else
		{
			cout<<"Input is not valid please enter again."<<endl;
			valid = false;
		}
	}











	system("clear");



	cout<<"NOT A PART OF PROGRAM.CPP"<<endl;
	Pilot *James = new Pilot("James", 28, "Male");
	Pilot *Nora = new Pilot("Nora", 26, "Female");
	Plane *Hawk01 = new Plane("Hawk01", "HWK1", 20);
	Hawk01->set_passenger(23);
	Hawk01->set_destination("Syndey", "Adelaide");
	Hawk01->set_pilot(Nora);
	Hawk01->set_copilot(James);
	Hawk01->get_details();


//	Airport * Adelaide = new Airport (6, 2, "Adelaide Airport", "South Australia" );
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