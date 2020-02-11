#include "BinaryTree.h"
#include "TreeNode.h"

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