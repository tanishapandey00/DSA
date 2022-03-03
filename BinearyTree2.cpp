#include <iostream>
#include <algorithm>
#include <queue>
#include <climits>
#include <cmath>
#include <string>
using namespace std;
class BinaryTree
{
    int val;

public:
    BinaryTree *left;
    BinaryTree *right;
    BinaryTree(int k)
    {
        val = k;
        left = NULL;
        right = NULL;
    }
    // Converting Binary Tree to String
    // string s = "";
    string tree2str(BinaryTree *root, string ans)
    {
        if (!root)
            return ans;
        ans += to_string(root->val);
        if (root->left)
        {
            ans += "(";
            ans = tree2str(root->left);
            ans += ")";
        }
        if (root->right and root->left)
        {
            ans += "(";
            ans = tree2str(root->right);
            ans += ")";
        }
        else if (root->right)
        {
            ans += "()(";
            ans = tree2str(root->right);
            ans += ")";
        }
        return ans;
    }
};
int main()
{
    BinaryTree *bt = new BinaryTree(1);
    bt->left = new BinaryTree(2);
    bt->right = new BinaryTree(3);
    bt->left->left = new BinaryTree(4);
    string s = " ";
    bt->tree2str(bt, s);
    for (auto a : s)
        cout << a;
    return 0;
}