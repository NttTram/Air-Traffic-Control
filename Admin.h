#ifndef ADMIN_H
#define ADMIN_H


#include "Person.h"

 // Inheritance from Person
class Admin: virtual public Person 
{
	//private detail of admin
	private:
	void get_details();

	public:
	Admin(string pName, int pAge, string pGender);

	
	int ID;

	
	~Admin();
	
};


#endif