//Craig Whelan Lab4
#include <iostream>
#include "BinaryTree.h"

int main()
{
	BinaryTree tree;

	tree.add('c');
	tree.add('h');
	tree.add('z');
	tree.add('b');
	tree.add('d');
	tree.add('e');

	std::cout << "Binary Search Tree printed in In-Order Traversal: ";
	tree.printTreeAscending();

	std::cout << "Binary Search Tree printed in Pre-Order Traversal: "; 
	tree.printTreePreOrder();

	std::cout << "Binary Search Tree printed in Post-Order Traversal: ";
	tree.printTreePostOrder();
}

