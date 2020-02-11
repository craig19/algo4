#include <iostream>
#include "Person.h"
#include "Employee.h"
#include "Customer.h"
#include <vector>
#include <algorithm>


static bool compareFunc(Person* A, Person* B)
{
    return (A->getName() < B->getName());
}

int main()
{
    Person* personPtr = NULL;

    Person p1 = Person("Craig");
    personPtr = &p1;
    personPtr->printname();

    Employee e1 = Employee("Tom", 34000);
    personPtr = &e1;
    personPtr->printname();

    Customer c1 = Customer("John");
    personPtr = &c1;
    personPtr->printname();


    vector<Person*> people;
    people.push_back(new Person("Peter"));
    people.push_back(new Person("John"));
    people.push_back(new Person("David"));
    people.push_back(new Person("Aaron"));

    sort(people.begin(), people.end(), compareFunc);

    for (int i = 0; i < people.size(); i++)
    {
        cout << people[i]->getName() << endl;
    }

}
