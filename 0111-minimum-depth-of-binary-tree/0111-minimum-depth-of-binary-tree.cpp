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
    int min_d=INT_MAX;
    void mindep(TreeNode* root,int d)
    {
        if(!root) return;
        if(!root->left && !root->right)
        {
            min_d=min(d+1,min_d);
            return ;
        }
        mindep(root->left,d+1);
        mindep(root->right,d+1);
    }
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        mindep(root,0);
        return min_d;
    }
};