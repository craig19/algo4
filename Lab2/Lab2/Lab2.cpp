//x00075734

#include <array>
#include <iostream>
#include "templates.cpp"
using namespace std;



int main()
{
	//q1
	char x = 'c';
	char* xp = &x;
	char y = 'd';
	char* yp = &y;
	cout << "Q1" << endl << x << endl << y << endl;
	swap(xp, yp);
	cout << "Q1" << endl << x << endl << y << endl;

	//q2
	double sum = 1;
	multiples(sum, 2.9, 3);
	cout << "Q2" << endl << sum << endl;

	//q3
	double b = 2.2;
	cout << "Q3" << endl << init(2, 5, b) << endl;

	//q4
	const int SIZE = 5;

	int arr[SIZE] = { 70, 4, 52, 1, 51};

	quickSort<int>(arr, 0, sizeof(arr - 1));

	cout << "Sorted: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << ", ";
	}
}
