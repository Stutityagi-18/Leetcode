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
   void preorder(TreeNode* root,string currpath ,vector<string>& ans)
    {
        if(root==NULL)
        {
            return ;
        }
        if(root->left==NULL && root->right==NULL)
        {
            if(currpath=="")
            {
                ans.push_back(to_string(root->val));
            }
            else
            {
                ans.push_back(currpath+"->"+to_string(root->val));
            }
        }   
        preorder(root->left,currpath+"->"+to_string(root->val),ans);
        preorder(root->right,currpath+"->"+to_string(root->val),ans);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        preorder(root,"",ans);
        return ans;
        
    }
};