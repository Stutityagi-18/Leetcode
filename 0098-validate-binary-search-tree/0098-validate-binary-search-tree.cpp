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
    bool isValidBST(TreeNode* root) {
     return isValidBST(root, LONG_MIN, LONG_MAX);   
    }
    bool isValidBST(TreeNode* root,long MinVal,long MaxVal)
    {
        if(root == NULL) return true;
        else if(root->val<=MinVal || root->val>=MaxVal) return false;
        else{
            return isValidBST(root->left,MinVal,root->val) && isValidBST(root->right,root->val,MaxVal);
        }

    }
};