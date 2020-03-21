#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
using namespace std;

template<typename T>
class MaxHeap
{
private:
	vector<T> vec;
	int parentN(int);
	int leftN(int);
	int rightN(int);
	void trickleDownRec(int, int);
	void trickleUpRec(int);

public:
	void heapSort();
	void display();
	void insert(int);
	void remove();
	T top() { return vec[0]; }
	size_t size() const { return vec.size(); }
};


template<typename T>
int MaxHeap<T>::parentN(int i)
{
	return (i - 1) / 2;
}

template<typename T>
int MaxHeap<T>::leftN(int i)
{
	return (2 * i + 1);
}

template<typename T>
int MaxHeap<T>::rightN(int i)
{
	return (2 * i + 2);
}

template<typename T>
void MaxHeap<T>::trickleDownRec(int n, int i)
{

	// get left and right child of node at index i
	int left = leftN(i);
	int right = rightN(i);

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

template<typename T>
void MaxHeap<T>::trickleUpRec(int i)
{
	// check if node at index i and its parent violates 
	// the heap property
	if (i && vec[parentN(i)] < vec[i])
	{
		// swap the two if heap property is violated
		swap(vec[i], vec[parentN(i)]);

		// call Heapify-up on the parent
		trickleUpRec(parentN(i));
	}
}


template<typename T>
void MaxHeap<T>::heapSort()
{
	int n = vec.size();
	for (int i = n - 1; i >= 0; i--) {
		swap(vec[0], vec[i]);
		trickleDownRec(i, 0);
	}
}

template<typename T>
void MaxHeap<T>::display()
{
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec.at(i) << ", ";
	}
}

template<typename T>
void MaxHeap<T>::insert(int key)
{
	// insert the new element to the end of the vector
	vec.push_back(key);

	// get element index and call heapify-up procedure
	int index = vec.size() - 1;
	trickleUpRec(index);
}

template<typename T>
void MaxHeap<T>::remove()
{
	vec[0] = vec.back();
	vec.pop_back();

	// call heapify-down on root node
	trickleDownRec(vec.size(), 0);

}



template < typename T >
static T
kthSmallest2(size_t k, MaxHeap<T>& heap)
{
	if (k > heap.size()) k = heap.size();
	for (size_t numToRemove = heap.size() - k; numToRemove; --numToRemove) {
		heap.remove();
	}
	return heap.top();
}

//for the sorting step, the root element is changed with the last element
// and trickledown is then called on the root element. For each element, this again
// takes logn worst time because we might have to bring the element all the way from 
//the root to the leaf. Since we repeat this n time, heapSort() is O(nlogn)