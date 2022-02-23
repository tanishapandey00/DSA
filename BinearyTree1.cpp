#include <iostream>
#include <algorithm>
using namespace std;
// Creating and Inplemneting differtent properties of Binary tree
class BinaryTree
{
    int key;

public:
    BinaryTree *left;
    BinaryTree *right;
    BinaryTree(int k)
    {
        key = k;
        left = right = NULL;
    }
    // Tree Traversal
    // 1. Inorder Traversal (left,root,right);
    void inorder(BinaryTree *root)
    {
        if (root != NULL)
        {
            inorder(root->left);
            cout << root->key << " ";
            inorder(root->right);
        }
    }
    // 2. Preorder Traversal (root,left,right);
    void preorder(BinaryTree *root)
    {
        if (root != NULL)
        {
            cout << root->key << " ";
            preorder(root->left);
            preorder(root->right);
        }
    }
    // 3. Postorder Traversal (left,right,root)
    void postorder(BinaryTree *root)
    {
        if (root != NULL)
        {
            postorder(root->left);
            postorder(root->right);
            cout << root->key << " ";
        }
    }
    // Height of the tree by recusive approach
    int height(BinaryTree *root)
    {
        if (root == NULL)
            return 0;
        else
            return (max(height(root->left), height(root->right)) + 1);
    }
};
int main()
{
    BinaryTree *root = new BinaryTree(10);
    root->left = new BinaryTree(20);
    root->right = new BinaryTree(30);
    root->left->left = new BinaryTree(40);
    root->inorder(root);
    cout << endl;
    root->preorder(root);
    cout << endl;
    root->postorder(root);
    cout << endl;
    cout << "Height = " << root->height(root) << endl;
    return 0;
}
