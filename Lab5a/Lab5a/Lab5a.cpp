#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include "Heap.cpp"
#include "chrono"
using namespace std;
using namespace std::chrono;



int main()
{
	
	Heap<int> pq;

	pq.insert(3);
	pq.insert(2);
	pq.insert(15);

	pq.insert(5);
	pq.insert(4);
	pq.insert(45);
	pq.insert(1);
	pq.insert(203);
	pq.insert(150);

	cout << "Max Heap: \n";
	pq.display();

	pq.remove();
	cout << "\n";
	pq.display();

	


	auto start = high_resolution_clock::now();

	Heap<int> pq2;
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
		<< duration.count() << " microseconds" << endl;



	return 0;
}
