#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;
// Abstract class
class Person
{
public:
	Person();
	Person(string pName, int pAge, string pGender);


	static int ID;	
	string name;
	string gender;
	int age;


	// Polymorphism
	 virtual void get_details();



	 ~Person();
	
};


#endif