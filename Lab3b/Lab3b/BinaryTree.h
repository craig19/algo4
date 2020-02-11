#pragma once
#include <iostream>
#include "TreeNode.h"

class BinaryTree
{
public:
	BinaryTree();
	void add(char data);
	int height();
	void search(char data);
	void printTreeAscending() const;

private:
	static void add(TreeNode* toAdd, char data);
	static int height(TreeNode* root);
	static void search(TreeNode* node, char data);
	static void printTreeAscending(TreeNode* root);

	TreeNode* rootPtr;
	
	
};

