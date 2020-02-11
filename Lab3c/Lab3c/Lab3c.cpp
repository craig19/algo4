#include <iostream>
#include <iomanip>

// TreeNode.h
template<typename T>
struct TreeNode
{
    T value;
    TreeNode* left, * right;
    TreeNode(T theValue);
};

// TreeNode.cpp
template<typename T>
TreeNode<T>::TreeNode<T>(T theValue) : value(theValue), left(nullptr), right(nullptr)
{
}

// BinaryTree.h
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

// BinaryTree.cpp
template<typename T>
BinaryTree<T>::BinaryTree<T>() : rootPtr(nullptr)
{
}

template<typename T>
void BinaryTree<T>::add(T data)
{
    if (rootPtr)
    {
        add(rootPtr, data);
    }
    else
    {
        rootPtr = new TreeNode<T>(data);
    }
}

template<typename T>
void BinaryTree<T>::add(TreeNode<T>* toAdd, T data)
{
    if (data < toAdd->value) {
        if (toAdd->left)
        {
            add(toAdd->left, data);
        }
        else
        {
            toAdd->left = new TreeNode<T>(data);
        }
    }
    else {
        if (toAdd->right) {
            add(toAdd->right, data);
        }
        else {
            toAdd->right = new TreeNode<T>(data);
        }
    }

}

template<typename T>
void BinaryTree<T>::print() const
{
    print(rootPtr);
    std::cout << '\n';
}

template<typename T>
void BinaryTree<T>::print(TreeNode<T>* node)
{
    if (node)
    {
        print(node->left);
        std::cout << node->value << ' ';
        print(node->right);
    }
}


// Main.cpp
int main()
{
    BinaryTree<char> tree;

    for (char ch : {'c', 'w', 'd', 'u', 'v', 'a'})
        tree.add(ch);

    //for (char ch : {7, 80, 97, 105, 45, 12, 109, 20, 2})
    //   tree.add(ch);

    tree.print();

    return 0;
}