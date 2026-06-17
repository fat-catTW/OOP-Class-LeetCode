/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {

    int height(TreeNode* root, bool &balance)
    {
        if(!root || !balance)
        {
            return 0;
        }

        if(!root->left && !root->right)
        {
            return 1;
        }

        int leftH = height(root->left, balance);
        int rightH = height(root->right, balance);

        if(abs(leftH - rightH) > 1)
        {
            balance = false;
        }

        return 1 + (leftH > rightH ? leftH : rightH);

    }

    

public:
    bool isBalanced(TreeNode* root) 
    {
        bool isBalance = true;

        height(root, isBalance);

        return isBalance;
    }
};