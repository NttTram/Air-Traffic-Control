#include "Person.h"

	int Person::ID = 0;
	Person::Person(string pName, int pAge, string pGender)
	{	// Declaring variables 
		name = pName;
		age = pAge;
		gender = pGender;
		ID++; // Increase ID count for each person created
	}	


	void Person::get_details()
	{
		// All person info
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age<<endl;
		cout<<"Gender: "<<gender<<endl;

	}

	Person::~Person()
	{
		cout<<"Person died."<<endl;
	}