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
public:
    bool Recursion(TreeNode* curr, int targetSum, int sum)
    {
        if(!curr)
        {
            return false;
        }

        sum += curr->val;
        if(curr->right == NULL && curr->left == NULL)
        {
            return sum == targetSum;
        }

        return (Recursion(curr->right, targetSum, sum) || Recursion(curr->left, targetSum, sum));

    }

    bool hasPathSum(TreeNode* root, int targetSum) 
    {
        return Recursion(root, targetSum, 0);
    }
};