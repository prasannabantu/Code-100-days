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
vector<vector<int> >ans;
void buildv(TreeNode* root,int depth)
{
        if(root==NULL) return;
        if(ans.size()==depth)
                ans.push_back(vector<int>());
        ans[depth].push_back(root->val);
        buildv(root->left,depth+1);
        buildv(root->right,depth+1);
}
vector<vector<int> > levelOrder(TreeNode* root) {
        buildv(root,0);
        return ans;
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

vector<vector<int> > levelOrder(TreeNode* root) {
        vector<vector<int> >ans;
        if(root==NULL) return ans;
        queue<TreeNode*>Q;
        Q.push(root);
        while(!Q.empty())
        {
                vector<int>res;
                for(int i=Q.size(); i>0; i--)
                {
                        TreeNode* k=Q.front(); Q.pop();
                        res.push_back(k->val);
                        if(k->left) Q.push(k->left);
                        if(k->right) Q.push(k->right);
                }
                ans.push_back(res);
        }
        return ans;
}
};
