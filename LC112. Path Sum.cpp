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
int ans=0;
bool hasPathSum(TreeNode* root, int t) {
        if(root==NULL) return 0;
        if(t==root->val && root->left==NULL && root->right==NULL) return 1;
        return hasPathSum(root->left,t-root->val)||hasPathSum(root->right,t-root->val);
}
};
