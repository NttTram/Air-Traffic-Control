#include "Admin.h"


	Admin::Admin(string pName, int pAge, string pGender): Person(pName, pAge, pGender)
	{
		ID = Person::ID;
	}


	void Admin::get_details()
	{
		cout<<"Admin ID: "<<ID<<endl;
		Person::get_details();
	}
	Admin::~Admin()
	{
		
	}