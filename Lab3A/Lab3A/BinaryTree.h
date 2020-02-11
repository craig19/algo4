#pragma once
#include <iostream>
#include "TreeNode.h"

class BinaryTree
{
public:
	BinaryTree();
	void add(int data);
	int height();


private:
	static void add(TreeNode* toAdd, int data);
	static int height(TreeNode* node);
	TreeNode* rootPtr;
};

