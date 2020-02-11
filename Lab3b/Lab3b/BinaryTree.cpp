#include "BinaryTree.h"
#include "TreeNode.h"
#include <iostream>
using namespace std;

BinaryTree::BinaryTree() : rootPtr(nullptr)
{
}

void BinaryTree::add(char data)
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


void BinaryTree::add(TreeNode* toAdd, char data)
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

void BinaryTree::search(char data)
{
	search(rootPtr, data);
}

//code derived from pseudo-code from geeksforgeeks.org
void BinaryTree::search(TreeNode* root, char data)
{
	if (!root)
	{
		cout << "Character: " << data << " NOT FOUND";
	}
	else if (root->value == data)
	{
		cout << "Character: " << data << " FOUND";
	}
	else if (root->value < data)
	{
		return search(root->right, data);
	}
	else
	{
		return search(root->left, data);
	}
}


void BinaryTree::printTreeAscending() const
{
	printTreeAscending(rootPtr);
	std::cout << "\n";
}

//uses In-order traversal **
//got some help on cpp forums
void BinaryTree::printTreeAscending(TreeNode* root)
{
	if (root)
	{
		printTreeAscending(root->left);
		(root->left && root->right);
	    cout << root->value << " ";
		printTreeAscending(root->right);
	}
}