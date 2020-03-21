static void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

// partition the array using last element as pivot
static int quickSortDivide(int theArray[], int first, int last)
{
	int pivot = theArray[last]; //pivot  
	int i = (first - 1); //index of smaller element  

	for (int j = first; j <= last - 1; j++)
	{
		//if current element is smaller than the pivot  
		if (theArray[j] < pivot)
		{
			i++; //increment index of smaller element  
			swap(&theArray[i], &theArray[j]);
		}
	}
	swap(&theArray[i + 1], &theArray[last]);
	//
	return (i + 1);
}


static void quickSort(int theArray[], int first, int last)
{
	if (first < last)
	{
		//partition the array
		int ans = quickSortDivide(theArray, first, last);
		//sort the sub arrays independently 
		quickSort(theArray, first, ans - 1);
		quickSort(theArray, ans + 1, last);
	}
}

// Best case: occurs when the partition process always picks the middle element
// as pivot. (int pivot = theArray[last];). T(n) = 2T(n/2)  + 0(n) i.e. O(nlogn)
// 2T(n/2) representing the 2 recursive calls and O(n) being for the partition process
// Quick sort is O(nlogn) in most cases and O(n^2) in rare cases