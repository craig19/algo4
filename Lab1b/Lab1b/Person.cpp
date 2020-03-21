#include "Person.h"
using namespace std;


Person::Person(string n) : name(n)
{
}

void Person::printname()
{
	cout << "Name: " << name << endl;
}

string Person::getName()
{
	return name;
}

//int Person::sortByName(Person* A, Person* B)
//{
//	return (A->getName().compare(B->getName()) !=0);
//}
