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
    int dfs(TreeNode* root,int val)
    {
        if(!root)
        {
            return 0;
        }
        int cnt=0;
        if(root->val>=val)
        {
            cnt++;
        }
        int maxi=max(val,root->val);
        int lcnt=dfs(root->left,maxi);
        int rcnt=dfs(root->right,maxi);
        return cnt+lcnt+rcnt;
    }
    int goodNodes(TreeNode* root) {
        return dfs(root,root->val);
    }
};