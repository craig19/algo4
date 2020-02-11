#include "Customer.h"


Customer::Customer(string name) : Person(name)
{

}

void Customer::printname()
{
	cout << "Name: " << name << " and " << complaint << endl;

}