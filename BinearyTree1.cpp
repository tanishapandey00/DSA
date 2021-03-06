#include <iostream>
#include <algorithm>
#include <queue>
#include <climits>
#include <cmath>
using namespace std;
// Creating and Inplemneting differtent properties of Binary tree
class BinaryTree
{
    int key;

public:
    BinaryTree *left;
    BinaryTree *right;
    int maxLevel = 0;
    BinaryTree(int k)
    {
        key = k;
        left = right = NULL;
    }
    // Tree Traversal (Depth first Traversal Methods)
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
    // Deptyh first Traversal
    /*we will use Queue Data Sturucture and we enque the level starting
     from root and when we are printing these level key we will pop them out and push its chlidern*/
    void Depthfirst(BinaryTree *root)
    {
        if (root == NULL)
            return;
        queue<BinaryTree *> q;
        q.push(root);
        while (q.empty() == false)
        {
            BinaryTree *curr = q.front();
            q.pop();
            cout << curr->key << " ";
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
    }
    // Level Order Traversal Or Depth First Traversal ine by Line
    // Method 1
    void Levelorder1(BinaryTree *root)
    {
        if (root == NULL)
            return;
        queue<BinaryTree *> q;
        q.push(root);
        q.push(NULL);
        while (q.size() > 1)
        {
            BinaryTree *curr = q.front();
            q.pop();
            if (curr == NULL)
            {
                cout << endl;
                q.push(NULL);
                continue;
            }
            cout << curr->key << " ";
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
    }
    // Method 2
    void levelorder2(BinaryTree *root)
    {
        if (root == NULL)
            return;
        queue<BinaryTree *> q;
        q.push(root);
        while (q.empty() == false)
        {
            int count = q.size();
            for (int i = 0; i < count; i++)
            {
                BinaryTree *curr = q.front();
                q.pop();
                cout << curr->key << " ";
                if (curr->left != NULL)
                    q.push(curr->left);
                if (curr->right != NULL)
                    q.push(curr->right);
            }
            cout << endl;
        }
    }
    // Size of the Binary Tree
    int TreeSize(BinaryTree *root)
    {
        if (root == NULL)
            return 0;
        else
        {
            return 1 + TreeSize(root->left) + TreeSize(root->right);
        }
    }
    // MAximum in a Binary Tree
    int getmax(BinaryTree *root)
    {
        if (root == NULL)
            return INT_MIN;
        else
        {
            return max(root->key, max(getmax(root->left), getmax(root->right)));
        }
    }
    // PrintLeft View
    // Method 1 (Recusive Approach)
    void printleft(BinaryTree *root, int level)
    {
        if (root == NULL)
            return;
        if (maxLevel < level)
        {
            cout << root->key << " ";
            maxLevel = level;
        }
        printleft(root->left, level + 1);
        printleft(root->right, level + 1);
    }
    void printleftview1(BinaryTree *root)
    {
        printleft(root, 1);
    }
    // Method 2 Itreative Approach
    void printleftview2(BinaryTree *root)
    {
        if (root == NULL)
            return;
        queue<BinaryTree *> q;
        q.push(root);
        while (q.empty() == false)
        {
            int count = q.size();
            for (int i = 0; i < count; i++)
            {
                BinaryTree *curr = q.front();
                q.pop();
                if (i == 0)
                {
                    cout << curr->key << " ";
                }
                if (curr->left != NULL)
                    q.push(curr->left);
                if (curr->right != NULL)
                    q.push(curr->right);
            }
        }
    }
    // Children Sum Property we are going tocheck if the Binary tree follows children sum property or not
    bool csp(BinaryTree *root)
    {
        if (root == NULL)
            return true;
        if (root->left == NULL && root->right == NULL)
            return true;
        int sum = 0;
        if (root->left != NULL)
            sum += root->left->key;
        if (root->right != NULL)
            sum += root->right->key;
        return (root->key == sum && csp(root->left) && csp(root->right));
    }
    // Balanced Binary Tree
    //method 1
    bool balacedBT(BinaryTree *root)
    {
        if (root == NULL)
            return true;
        int h1 = height(root->left), h2 = height(root->right);
        return ((h2 - h1) <= 1 && balacedBT(root->left) && balacedBT(root->right));
    }
    //method 2
};
int main()
{
    BinaryTree *root = new BinaryTree(10);
    root->left = new BinaryTree(20);
    root->right = new BinaryTree(70);
    root->left->left = new BinaryTree(40);
    root->inorder(root);
    cout << endl;
    root->preorder(root);
    cout << endl;
    root->postorder(root);
    cout << endl;
    cout << "Height = " << root->height(root) << endl;
    root->Depthfirst(root);
    cout << endl;
    root->Levelorder1(root);
    cout << endl;
    root->levelorder2(root);
    cout << "Size of Tree " << root->TreeSize(root) << endl;
    cout << "Max = " << root->getmax(root) << endl;
    root->printleftview1(root);
    cout << endl;
    root->printleftview2(root);
    cout << endl;
    cout << root->csp(root) << endl;
    return 0;
}
