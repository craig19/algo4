#pragma once
#ifndef Person_H
#define Person_H
using namespace std;
#include <iostream>


class Person
{
public:
	Person(string); // initialise the name
	virtual void printname(); // if virtual is removed then slicing of data occurs for employee and customer classes
	//static int sortByName(Person* A, Person* B);
	string getName();
protected:
	string name;
};

#endif // !Person_H