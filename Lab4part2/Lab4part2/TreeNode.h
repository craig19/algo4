//Craig Whelan Lab4A part 2
#pragma once
class TreeNode
{
	friend class BinaryTree;
private:
	int value;
	TreeNode* left, * right;
	TreeNode(int theValue);
};

