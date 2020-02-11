#pragma once
#ifndef Employee_H
#define Employee_H
#include "Person.h"


class Employee : public Person
{
public:
	Employee(string, double); // initialise the name
	void printname();
private:
	double salary;

};

#endif // !Person_H