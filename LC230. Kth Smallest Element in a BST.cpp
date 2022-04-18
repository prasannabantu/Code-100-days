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
int n=0; int ans=0;
void pass(TreeNode* root,int k)
{
        if(root!=NULL)
        {
                pass(root->left,k);
                n++;
                if(n==k) ans=root->val;
                pass(root->right,k);
        }
}
int kthSmallest(TreeNode* root, int k) {
        pass(root,k);
        return ans;
}
};
