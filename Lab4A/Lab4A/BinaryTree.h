//Craig Whelan Lab4
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
	void printTreePreOrder() const;
	void printTreePostOrder() const;

private:
	static void add(TreeNode* toAdd, char data);
	static int height(TreeNode* root);
	static void search(TreeNode* node, char data);
	static void printTreeAscending(TreeNode* root);
	static void printTreePreOrder(TreeNode* root);
	static void printTreePostOrder(TreeNode* root);

	TreeNode* rootPtr;


};


