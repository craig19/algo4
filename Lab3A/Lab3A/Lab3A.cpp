
#include "BinaryTree.h"
#include <iostream>
using namespace std;

int main()
{
	BinaryTree tree;

	tree.add(10);
	tree.add(15);
	tree.add(16);
	tree.add(14);
	tree.add(50);
	tree.add(3);
	tree.add(5);
	tree.add(6);
	tree.add(7);


	cout << tree.height() << '\n';

	return 0;
}

