#include "Employee.h"

Employee::Employee(string name, double sal) : Person(name), salary(sal) 
{

}

void Employee::printname()
{
	cout << "Name: " << name << " Salary: " << salary << endl;
}