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
    int minDepth(TreeNode* root) {
        if(!root)
        {
            return 0;
        }
        queue<TreeNode*> q;
        q.push(root);
        int minidepth = 1;
        while(!q.empty())
        {
            int levelSize = q.size();
            for(int i = 0 ; i < levelSize ; i++)
            {
                TreeNode* curr = q.front();
                q.pop();
                if(curr->left == NULL && curr->right == NULL)
                {
                    return minidepth;
                }

                if(curr->left != NULL)
                {
                    q.push(curr->left);
                }

                if(curr->right != NULL)
                {
                    q.push(curr->right);
                }

            }
            minidepth++;
        }

        return minidepth;
    }
};