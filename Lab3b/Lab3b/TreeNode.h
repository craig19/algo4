#pragma once
class TreeNode
{
	friend class BinaryTree;
private:
	char value;
	TreeNode* left, * right;
	TreeNode(char theValue);
};

