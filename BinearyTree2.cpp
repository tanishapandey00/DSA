#include <iostream>
#include <algorithm>
#include <queue>
#include <climits>
#include <cmath>
using namespace std;
class BinaryTree
{
    int key;

public:
    BinaryTree *left;
    BinaryTree *right;
    BinaryTree(int k)
    {
        key = k;
        left = NULL;
        right = NULL;
    }
    //Converting
};
int main()
{
    BinaryTree *bt = new BinaryTree(1);
    bt->left = new BinaryTree(2);
    bt->right = new BinaryTree(3);
    bt->left->left = new BinaryTree(4);
    string s;
    bt->tree(bt, s);
    // for (auto a : s)
    //     cout << a;
    return 0;
}