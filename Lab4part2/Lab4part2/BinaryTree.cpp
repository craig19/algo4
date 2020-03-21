//Craig Whelan Lab4A part 2
#include "BinaryTree.h"
#include "TreeNode.h"
#include <iostream>

BinaryTree::BinaryTree() : rootPtr(nullptr)
{
}

void BinaryTree::add(int data)
{
	if (rootPtr)
	{
		add(rootPtr, data);
	}
	else
	{
		rootPtr = new TreeNode(data);
	}
}

//code derived from pseudo-code from geeksforgeeks.org
void BinaryTree::add(TreeNode* toAdd, int data)
{
	if (data < toAdd->value) {
		if (toAdd->left)
		{
			add(toAdd->left, data);
		}
		else
		{
			toAdd->left = new TreeNode(data);
		}
	}
	else {
		if (toAdd->right) {
			add(toAdd->right, data);
		}
		else {
			toAdd->right = new TreeNode(data);
		}
	}

}

int BinaryTree::height()
{
	return height(rootPtr);
}

//prints height of the Binary Search Tree
int BinaryTree::height(TreeNode* node)
{
	if (!node)
	{
		return 0;
	}
	else
	{
		int leftSide = height(node->left);
		int rightSide = height(node->right);

		if (leftSide > rightSide)
		{
			return(leftSide + 1);
		}
		else
		{
			return (rightSide + 1);
		}
	}

}


bool BinaryTree::hasPath(int sum)
{
	return hasPath(rootPtr, sum);
}


//https://www.geeksforgeeks.org/root-to-leaf-path-sum-equal-to-a-given-number//
bool BinaryTree::hasPath(TreeNode* rootNode, int sum)
{
	if (rootNode == NULL) 
	{
		return false;
	}
	else {
		int ans = false;

		int subSum = sum - rootNode->value;

		if (subSum == 0 && rootNode->left == NULL && rootNode->right == NULL)
		{
			return true;
		}

		if (rootNode->left) 
		{
			ans = ans || hasPath(rootNode->left, subSum);
		}

		if (rootNode->right) 
		{
			ans = ans || hasPath(rootNode->right, subSum);
		}
		return ans;
	}
}



void BinaryTree::printPaths()
{
	int path[10];
	printPaths(rootPtr, path, 0);
}


//https://www.geeksforgeeks.org/given-a-binary-tree-print-all-root-to-leaf-paths/
void BinaryTree::printPaths(TreeNode* node, int path[], int pathLen)
{
	if (node == nullptr)
		return;

	path[pathLen] = node->value;
	pathLen++;

	//if it is a leaf node then calc if all node values add up to sum
	if (!node->left && !node->right)
	{
		int arrSum = 0;

		for (int i = 0; i < 3; i++)
		{
			arrSum = arrSum + path[i];
			std::cout << path[i] << " ";
		}
		std::cout << "\n";

		
	}
	else
	{
		printPaths(node->left, path, pathLen);
		printPaths(node->right, path, pathLen);
	}

}