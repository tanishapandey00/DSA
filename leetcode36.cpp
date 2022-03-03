#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class BST
{

public:
    int val;
    BST *left;
    BST *right;
    BST(int v)
    {
        val = v;
        left = right = NULL;
    }
    BST()
    {
        left = right = NULL;
    }
    void level(BST *root)
    {
        if (root)
            return;
        queue<BST *> q;
        q.push(root);
        while (!q.empty())
        {
            BST *curr = q.front();
            q.pop();
            cout << curr->val << " ";
            if (curr->left)
                q.push(curr->left);
            if (curr->right)
                q.push(curr->right);
        }
    }
};
BST *helper(vector<int> &nums, int si, int ed)
{
    if (si > ed)
        return NULL;
    int mid = (si + ed) / 2;
    BST *root = new BST(nums[mid]);
    root->left = helper(nums, si, mid - 1);
    root->right = helper(nums, mid + 1, ed);
    return root;
}
BST *sortedArrayToBST(vector<int> &nums)
{
    return helper(nums, 0, nums.size() - 1);
}
int main()
{
    vector<int> v = {-10, -3, 0, 5, 9};
    BST *root = new BST();
    root = sortedArrayToBST(v);
    root->level(root);
    return 0;
}