//q1
template <typename T>
void swap(T& lhs, T& rhs)
{
	T temp = lhs;
	lhs = rhs;
	rhs = temp;
}

template <typename T>
void swap(T* lhs, T* rhs)
{
	T temp = *lhs;
	*lhs = *rhs;
	*rhs = temp;
}

//q2
template <typename T>
void multiples(T& sum, T x, int n)
{
	for (int i = 0; i < n; i++)
	{
		sum += (x * i);
	}
}

//q3
template <typename T1, typename T2>
T1 init(T1 num1, T1 num2, T2& start)
{
	start = 1;
	return (num1 + num2);
}

//q4
//found pseudo code for the below on wikipedia
template<typename T>
T partition(T array1[], T low, T high) {
	T pivot = array1[high];
	T idx = low - 1;
	for (int x = low; x <= high - 1; x++)
	{
		if (array1[x] < pivot)
		{
			idx++;
			swap(&array1[idx], &array1[x]);

		}
	}
	swap(&array1[idx + 1], &array1[high]);
	return (idx + 1);
}

template<typename T>
void quickSort(T array1[], T low, T high) {
	if (low < high)
	{
		T p = partition(array1, low, high);
		quickSort(array1, low, p - 1);
		quickSort(array1, p + 1, high);
	}
}