#include <iostream>
#include "QuickSort.cpp"
using namespace std;

int main()
{
	int arrLength = 15;
	int* arr = new int[arrLength] { 2, 5, 10, 15, 24, 16, 51 ,89, 65, 48, 74, 96, 85, 45, 50};

	cout << "Array before QuickSort\n";

	for (int i = 0; i < arrLength; i++) {
		cout << arr[i] << " ";
	}
	quickSort(arr, 0, arrLength - 1);

	cout << "\nAfter Quicksort\n";

	for (int i = 0; i < arrLength; i++) {
		cout << arr[i] << " ";
	}

	delete[] arr;
}