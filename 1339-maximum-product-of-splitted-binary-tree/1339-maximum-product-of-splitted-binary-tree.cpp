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
    long long total_sum=0;
    long long max_prod=0;
    //calculating maxsum
    void maxsum(TreeNode* root)
    {
        if(root==nullptr)
        {
            return;
        }
        total_sum+=root->val;
        maxsum(root->left);
        maxsum(root->right);
    }
    long long dfs(TreeNode* root)
    {
        if(root==nullptr)
        {
            return 0;
        }
        long long left_sum=dfs(root->left);
        long long right_sum=dfs(root->right);
        long long sub_tree_sum=root->val+left_sum+right_sum;
        //product if we split at this point
        long long product=(sub_tree_sum)*(total_sum-sub_tree_sum);
        max_prod=max(max_prod,product);
        return sub_tree_sum;
    }


    int maxProduct(TreeNode* root) {
        long long mod=1e9+7;
        maxsum(root);//calculating total sum
        dfs(root);//calculating max product
        return max_prod%mod;

        
    }
};