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
void dfs(TreeNode* root,vector<int>&res,int level)
{
        if(!root) return;
        if(level>=res.size()) res.push_back(root->val);
        dfs(root->right,res,level+1);
        dfs(root->left,res,level+1);
}

vector<int> rightSideView(TreeNode* root) {
        vector<int>res;
        dfs(root,res,0);
        return res;
}
};







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

vector<int> rightSideView(TreeNode* root) {
        vector<int>res;
        queue<TreeNode*>q;
        q.push(root);
        if(!root) return {};
        while(!q.empty())
        {
                int n=q.size();
                TreeNode* k;
                for(int i=0; i<n; i++)
                {
                        k=q.front(); q.pop();
                        if(k->left) q.push(k->left);
                        if(k->right) q.push(k->right);
                }
                res.push_back(k->val);
        }
        return res;
}
};
