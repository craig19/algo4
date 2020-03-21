//Craig Whelan Lab4A part 2
#pragma once
#include "TreeNode.h"

class BinaryTree
{
public:
	BinaryTree();
	void add(int data);
	int height();
	//void hasPathSum(int sum);
	bool hasPath(int sum);
	void printPaths();

private:
	static void add(TreeNode* toAdd, int data);
	static int height(TreeNode* node);
	TreeNode* rootPtr;
	//static void hasPathSum(TreeNode* node, int path[], int sum, int pathLen);
	static bool hasPath(TreeNode* rootNode, int sum);
	static void printPaths(TreeNode* node, int path[], int pathLen);
};

