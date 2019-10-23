#include "Airport.h"
#include "Pilot.h"
#include "Person.h"
#include "AirController.h"
#include "Plane.h"
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;


int main()
{

	string selectUser;
	int selectATC;
	string User;
	int selectSet;


	// Airports
	Airport* airport[12]; 
	airport[0] = new Airport(10, 2, "Adelaide", "Adelaide"); //(int Mgate, int Mrunway, string name, string location);
	airport[1] = new Airport(18, 4, "Sydney", "Sydney"); 
	int countAirport = 1;

	//Pilots
	vector <Pilot*> pilots;
	pilots.push_back(new Pilot("Jack", 27, "M"));   //(string pName, int pAge, string pGender)
	pilots.push_back(new Pilot("Ben", 30, "M"));
	pilots.push_back(new Pilot("Jen", 24, "F"));
	pilots.push_back(new Pilot("Cody", 35, "M"));
	int countPilot = 3;

	//Air Traffic Controllers
	vector <AirController*> controller;
	controller.push_back(new AirController("Lana", 29, "F"));
	controller.push_back(new AirController("Dave", 41, "M")); //(string pName, int pAge, string pGender)
	int countController = 1;

	//Planes
	vector <Plane*> plane;
	plane.push_back(new Plane("Jetstar123", "JET123", 200)); //(string pName, string callSign, int maxPassenger)
	plane.push_back(new Plane("Jetstar098", "JET098", 150));
	plane.push_back(new Plane("Hawk123", "HWK123", 10));
	int countPlane = 2;



	bool login = true; //End login
	bool end = false;
	int selectAirport;
	string selectAirportS;


while(end == false)
{



	cout<<"Please select an airport: "<<endl;
	for(int i = 0; i < countAirport; i++ )
		{
			cout<<i+1<<". "<<airport[i]->Name<<"			";
			if(airport[i+1] != NULL)
			{
				cout<<i+2<<". "<<airport[i+1]->Name<<endl;
			}
		}

	cout<<"To exit enter 0."<<endl<<endl;
	cin>>selectAirportS;

	string countAirportS = to_string(countAirport + 1);
	if(selectAirportS >= "\0" && selectAirportS <= countAirportS)
	{
		selectAirport = stoi(selectAirportS);
		selectAirport = selectAirport - 1;
	}
	cout<<"selectAirportS: "<<selectAirportS<<endl;
	cout<<"countAirportS: "<<countAirportS<<endl;
	cout<<"selectAirport: "<<selectAirport<<endl;
	cout<<"countAirport: "<<countAirport<<endl;


	if(selectAirportS <= countAirportS && selectAirportS >= "1")
	{
		cout<<"login: "<<login<<endl;
		login = true; //restart login to true
		while(login == true)
		{		
			bool valid = false;

			

			


			cout<<"testing begin"<<endl;
			cout<<"Login as: "<<endl;
			cout<<"1. Admin "<<"		2. Pilot "<<"		3. Air Traffic Controller"<<endl;
			cout<<endl<<"				0 to exit"<<endl;


			

			while (valid == false)
			{
				string selectUser;
				cin>>selectUser;
				cout<<"selectUser: "<<selectUser<<endl; 

					if(selectUser == "1")
					{
						User = "Admin";
						valid = true;
						break;
					} 
					else if(selectUser == "2") 
					{
						User = "Pilot";
						valid = true;
						break;	
					}
							
				
					else if(selectUser == "3") 
					{
						User = "ATC";
						valid = true;
						break;	
					}
					else if(selectUser == "0")
					{
						User = "Exit";
						valid = true;
						login = false;
						break;
					}
					else
					{
						cout<<"Input invalid please enter again."<<endl;
						valid = false;
					}
				
			}
			system("clear");
			//admin section
			cout<<User<<endl;
			if(User == "Admin")
			{


				cout<<"Setting: "<<endl;
				cout<<"1. Plane 		2. Pilot 		3. Air Traffic Controller "<<endl;
				cin>>selectSet;

				if(selectSet == 1)
				{
					airport[selectAirport]->get_plane();


string pName;
string callSign;
int maxPassenger;
string empty;
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

	plane[selectSet2] = new Plane(pName, callSign, maxPassenger);

	system("clear");

	cout<<"				The Plane is called "<<plane[selectSet2]->pName<< " is added into the system."<<endl;
	cout<<"					To continue enter any keys."<<endl;
	cin>>empty;
	
	

	system("clear");














				}
				else if(selectSet == 2)
				{
					airport[selectAirport]->get_pilot();


tring pName;
	int pAge;
	string pGender;
	string empty;
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

	pilots[selectSet2] = new Pilot(pName, pAge, pGender);

	system("clear");

	cout<<"				The Pilot is called "<<pilots[selectSet2]->pName<< " is added into the system."<<endl;
	cout<<"					To continue enter any keys."<<endl;
	cin>>empty;
	
	

	system("clear");













				}
				else if(selectSet == 3)
				{

					for(int i = 0; i < countController; i++)
					{
						cout<<i+1<<". "<<controller[i]->Person::name<<"			";
						if(controller[i+1] != NULL)
						{
							cout<<i+2<<". "<<controller[i+1]->name<<endl;
						}

					}

					cout<<"		"<<countController + 1<<". Add New"<<endl; 
					
					int selectSet2;
					cin>>selectSet2;
					selectSet2 = selectSet2 - 1;



					if(selectSet2 == countController+1)
					{
						cout<<"					The AirController is new."<<endl<<" _______________________________________________________________________________________________________ "<<endl;
	cout<<"|				Please enter the following:						|"<<endl<<"|_______________________________________________________________________________________________________|"<<endl;
	cout<<"			AirController's name:";
	string pName;
	int pAge;
	string pGender;
	string empty;

	cin >> pName; 
	//cout<<endl;

	cout<<"			AirController's age:";
	cin>>pAge;
	//cout<<endl;

	cout<<"			The AirController's gender ";
	cin>>pGender;
	//cout<<endl;
	selectSet2 = selectSet2 -1;
	controller[selectSet2] = new AirController(pName, pAge, pGender);

	system("clear");

	cout<<"				The AirController is called "<<controller[selectSet2]->pName<< " is added into the system."<<endl;
	cout<<"					To continue enter any keys."<<endl;
	cin>>empty;
	
	

	system("clear");

					}
					airport[selectAirport]->add_air_controller(controller[selectSet2]);
					airport[selectAirport]->get_airport_details();

					cout<<"Added ATC."<<endl;

				}
				
				
			













			}

				
			else if(User == "Pilot")	//pilot section
			{

	s









			}




			//airport section
			else if(User == "ATC")
			{
				for(int i = -1; i < (airport[selectAirport]->countController)-1; i++)
				{	cout<<"testing ATC"<<endl;
					cout<<i+2<<". "<<airport[selectAirport]->controller[i+1]->name<<"			";
					cout<<"testing ATC2"<<endl;
					if(airport[selectAirport]->controller[i+2] != NULL)
					{
						cout<<i+3<<". "<<airport[selectAirport]->controller[i+2]->name<<endl;
					}
					else
					{	cout<<"testing ATC2"<<endl;
						break;
					}
					// if(airport[selectAirport]->controller[i+3] == NULL)
					// {
					// 	cout<<"testing ATC3"<<endl;
					// 	//break;
					// }
					

				}

				cin>>selectATC;























			}		

			cout<<"Testing login end"<<endl;

		} // << Login loop

	} // << selecting airport is valid/within given numbers
	else if(selectAirportS == "0")
	{
		end = true;
	}
	else
	{
		cout<<"Input invalid please enter again."<<endl;
		end = false;
	}


} // End the program. Main program loop that select airport


cout<<"Testing program end"<<endl;
	

	vector <Plane*>().swap(plane);
	//delete [] *airport;
	vector <Pilot*>().swap(pilots);
	vector <AirController*>().swap(controller);

	return 0;
}