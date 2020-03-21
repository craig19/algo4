#include <iostream>
using namespace std;



//merge the sorted smaller arrays to get a complete sorted array
static void merge(int arr[], int startIndex, int legnthToSort)
{

	int middle = startIndex + (legnthToSort - startIndex) / 2;
	//first subarray is arr[l..m] 
	//second subarray is arr[m+1..r] 
	int i, j, k;
	int n1 = middle - startIndex + 1;
	int n2 = legnthToSort - middle;

	//create temp arrays 
	int* L = new int[n1];
	int* R = new int[n2];

	//Copy data to temp arrays L[] and R[]
	for (i = 0; i < n1; i++)
		L[i] = arr[startIndex + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[middle + 1 + j];

	/* Merge the temp arrays back into arr[l..r]*/
	i = 0; // Initial index of first subarray 
	j = 0; // Initial index of second subarray 
	k = startIndex; // Initial index of merged subarray 
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	/* Copy the remaining elements of L[], if there
	   are any */
	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	/* Copy the remaining elements of R[], if there
	   are any */
	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
	delete[] L;
	delete[] R;
}

//divide array into half and sort each half using mergeSort recursive calls
static void mergeSort(int arrayToSort[], int first, int last)
{
	if (first == last)
	{
		return;
	}
	int middle = first + (last - first) / 2;
	mergeSort(arrayToSort, first, middle); // sort first half recursively
	mergeSort(arrayToSort, middle + 1, last); // sort sercond half recursively
	merge(arrayToSort, first, last); // merge sorted arrays from above steps
}

static void printArray(int A[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", A[i]);
	printf("\n");
}

//every level of our mergesort takes n operations to merge. The big-O complexity is therefore n times the 
//number of levels. On the last level, the size of the chunks we're merging is n/2. Before that, it's n/4, 
//before that n/8, etc. all the way to size 1. How many times must you divide n by 2 to get 1? log(n). 
//So we have log(n) levels. Therefore, our total runtime is O(n (work per level) * log(n) (number of levels)), n work log(n) times.

//By first dividing the array up into two equal halves, we can represent it by "log n" i.e.
//the number of steps taken is log(n+1) at most. To find the middle element of the array we require
//a single step  i.e. O(1). Then to merge the sub-arrays into an array of n elements, we will take
//O(n) amount of running time. Therefore the total time to perform merge sort will be n (log n+1) 
// i.e. O(nlogn)
