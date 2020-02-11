#include "BinaryTree.h"
#include <iostream>
using namespace std;

int main()
{
	BinaryTree tree;

	tree.add('c');
	tree.add('h');
	tree.add('z');
	tree.add('b');
	tree.add('d');
	tree.add('e');

	cout << "Height of Binary Tree: "<< tree.height() << endl;

	tree.search('q');
	cout << endl;

	cout << "Printed Tree in ascending order: ";
	tree.printTreeAscending();

	return 0;
}

