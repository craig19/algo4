#pragma once
#include "TreeNode.h"

template<typename T>
class BinaryTree
{
public:
    BinaryTree();
    void add(T data);
    void print() const;

private:
    static void add(TreeNode<T>* toAdd, T data);
    static void print(TreeNode<T>* node);

    TreeNode<T>* rootPtr;
};