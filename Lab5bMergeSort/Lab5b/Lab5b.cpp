#include <iostream>
#include "MergeSort.cpp"


int main()
{
	int arrLength = 15;
	int* arr = new int[arrLength] { 10, 60, 40, 64, 98, 1, 62, 15, 96, 2, 16, 17, 68, 100, 5};

	cout << "Array before MergeSort\n";
	for (int i = 0; i < arrLength; i++) {
		cout << arr[i] << " ";
	}
	mergeSort(arr, 0, arrLength - 1);

	cout << "\nAfter Mergesort\n";

	for (int i = 0; i < arrLength; i++) {
		cout << arr[i] << " ";
	}

	delete[] arr;
}