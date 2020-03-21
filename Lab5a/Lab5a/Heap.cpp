#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
using namespace std;

// https://www.techiedelight.com/min-heap-max-heap-implementation-c/
template <typename T>
class Heap
{
private:

	vector<T> vec;

	// return parent of A[i] if i is not already a root node
	int PARENT(int i)
	{
		return (i - 1) / 2;
	}

	// return left child of A[i]	
	int LEFT(int i)
	{
		return (2 * i + 1);
	}

	// return right child of A[i]	
	int RIGHT(int i)
	{
		return (2 * i + 2);
	}



	void trickleDownRec(int n, int i)
	{

		// get left and right child of node at index i
		int left = LEFT(i);
		int right = RIGHT(i);

		int largest = i;

		// compare vec[i] with its left and right child
		// and find largest value
		if (left < n && vec[left] > vec[i])
			largest = left;

		if (right < n && vec[right] > vec[largest])
			largest = right;

		// swap with child having greater value and 
		// call heapify-down on the child
		if (largest != i) {
			swap(vec[i], vec[largest]);
			trickleDownRec(n, largest);
		}
	}


	void trickleUpRec(int i)
	{
		// check if node at index i and its parent violates 
		// the heap property
		if (i && vec[PARENT(i)] < vec[i])
		{
			// swap the two if heap property is violated
			swap(vec[i], vec[PARENT(i)]);

			// call Heapify-up on the parent
			trickleUpRec(PARENT(i));
		}
	}


public:



	void heapSort()
	{
		int n = vec.size();
		for (int i = n - 1; i >= 0; i--) {
			swap(vec[0], vec[i]);
			trickleDownRec(i, 0);
		}
	}



	void display()
	{
		for (int i = 0; i < vec.size(); i++)
		{
			cout << vec.at(i) << ", ";
		}
	}




	// insert key into the heap
	void insert(int key)
	{
		// insert the new element to the end of the vector
		vec.push_back(key);

		// get element index and call heapify-up procedure
		int index = vec.size() - 1;
		trickleUpRec(index);
	}

	// function to remove element with highest priority 
	void remove()
	{
		vec[0] = vec.back();
		vec.pop_back();

		// call heapify-down on root node
		trickleDownRec(vec.size(), 0);

	}
};