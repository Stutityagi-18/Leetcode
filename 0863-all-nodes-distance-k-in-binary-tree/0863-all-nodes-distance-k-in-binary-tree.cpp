/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    unordered_map<TreeNode*,TreeNode*>parentM;
    //{5->3,6->5,2->5,7->2,4->2,1->3,0->1,8->1}//map aise ho jayega
    void inorder(TreeNode* root)
    {
        if(!root) return;
        if(root->left!=NULL)
        {
            parentM[root->left]=root;
        }
        inorder(root->left);
        if(root->right!=NULL)
        {
            parentM[root->right]=root;
        }
        inorder(root->right);
    }
    void bfs(TreeNode* target,int k,vector<int>& res)
    {
        queue<TreeNode*>q;
        q.push(target);
        unordered_set<int>visited;
        visited.insert(target->val);
        
        while(!q.empty())
        {
            int n=q.size();
            if(k==0)
            {
                break;
            }
            while(n--)
            {
                TreeNode* curr=q.front();
                q.pop();
                if(curr->left && !visited.count(curr->left->val))
                {
                    q.push(curr->left);
                    visited.insert(curr->left->val);
                }
                if(curr->right && !visited.count(curr->right->val))
                {
                    q.push(curr->right);
                    visited.insert(curr->right->val);
                }
                if(parentM.count(curr) && !visited.count(parentM[curr]->val))
                {
                    q.push(parentM[curr]);
                     visited.insert(parentM[curr]->val);

                }
            }
            k--;
        }
        while(!q.empty())
        {
            TreeNode* temp=q.front();
            q.pop();
            res.push_back(temp->val);
        }
       
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
       vector<int>res;
       inorder(root);
       bfs(target,k,res);
       return res;
    }
};