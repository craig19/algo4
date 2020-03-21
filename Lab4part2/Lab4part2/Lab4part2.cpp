//Craig Whelan Lab4A part 2
#include <iostream>
#include "BinaryTree.h"

int main()
{
	BinaryTree tree;

	//initialization list for binary search tree
	for (int ch : {10, 15, 8, 20, 9, 7})
		tree.add(ch);

	int sum = 45;
	//check if BST contains root-to-leaf path adding up to num
	std::cout << "Does BST contain root-to-leaf route adding up to " << sum << "? (0 - no, 1 - yes): " << tree.hasPath(sum);

	//print out all root-to-leaf node paths
	std::cout << "\n" << "Root-to-leaf paths: " << "\n";
	tree.printPaths();

}
