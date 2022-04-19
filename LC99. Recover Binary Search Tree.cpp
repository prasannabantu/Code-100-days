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

void mTree(TreeNode* root,TreeNode* &prev,TreeNode* &first,TreeNode* &end)
{
        if(!root) return;
        mTree(root->left,prev,first,end);
        if(prev)
        {
                if(root->val<prev->val)
                {
                        if(!first)
                        {
                                first=prev;
                        }
                        end=root;
                }
        }
        prev=root;
        mTree(root->right,prev,first,end);
}
void recoverTree(TreeNode* root) {
        TreeNode* start=NULL;
        TreeNode* prev=NULL;
        TreeNode* end=NULL;
        mTree(root,prev,start,end);
        swap(start->val,end->val);
}
};
