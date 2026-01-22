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
     int max_sum;
    int solve(TreeNode* root)
    {
       
        if(root==NULL)
        {
            return 0;
        }
        int left=solve(root->left);
        int right=solve(root->right);
        int neeche_hi_mil_gya_sum=left+right+root->val;//1 case
        int koi_ek_best=max(left,right)+root->val;//2 case
        int only_root_best=root->val;//3 case
        max_sum=max({max_sum,neeche_hi_mil_gya_sum,koi_ek_best,only_root_best});
        return max(koi_ek_best,only_root_best);
    }

    int maxPathSum(TreeNode* root) {
       max_sum=INT_MIN;
       solve(root);
       return max_sum;
    }
};