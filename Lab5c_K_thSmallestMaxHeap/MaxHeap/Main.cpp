//find the k'th smallest using max heap

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include "MaxHeap.cpp"
#include "chrono"
using namespace std;
using namespace std::chrono;



int main()
{

	MaxHeap<int> pq;

	pq.insert(8);
	pq.insert(2);
	pq.insert(15);

	pq.insert(5);
	pq.insert(4);
	pq.insert(45);
	pq.insert(13);
	pq.insert(203);
	pq.insert(150);

	cout << "Max Heap: \n";
	pq.display();


	/*auto start = high_resolution_clock::now();

	MaxHeap<int> pq2;
	for (int i = 0; i < 1000; i++)
	{
		int j = rand() % 1000;
		pq2.insert(j);
	}

	cout << "\nHeap Sort for Vector of 1000 random ints: \n";
	pq2.heapSort();
	pq2.display();


	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout << "\nTime taken by function: "
		<< duration.count() << " microseconds" << endl;*/

	//vector<int> vec1 = { 1, 2, 9, 87, 96, 7, 61, 3};


	//cout << "\n" << pq.kthSmallest(2);

	cout << "\n" << kthSmallest2(5, pq);



	return 0;
}
