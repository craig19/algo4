#pragma once
#ifndef Customer_H
#define Customer_H
#include "Person.h"
using namespace std;

class Customer : public Person
{
public:
	Customer(string); // initialise the name
	void printname();
	private:
	string complaint = "i would like to make a complaint";
};

#endif // !Person_H