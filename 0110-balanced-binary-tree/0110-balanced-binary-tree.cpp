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
    int getheight(TreeNode* curr)
    {
        if(curr==NULL)
        {
            return 0;
        }
        int left=getheight(curr->left);
        int right=getheight(curr->right);
        return max(left,right)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
        {
            return true;
        }
        int leftheight=getheight(root->left);
        int rightheight=getheight(root->right);
        if(abs(rightheight-leftheight)<1 && isBalanced(root->left) && isBalanced(root->right))
        {
            return true;
        }
        return false;
    }
};