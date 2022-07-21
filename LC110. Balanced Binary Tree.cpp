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
int findH(TreeNode* root)
{
        if(root)
        {
                return 1+max(findH(root->left),findH(root->right));
        }
        return 0;
}

bool inorder(TreeNode* root,int &f)
{
        if(root)
        {
                f&=inorder(root->left,f);
                int lh=findH(root->left);
                int rh=findH(root->right);
                f&=(abs(lh-rh)<=1);
                f&=inorder(root->right,f);
        }
        return f;
}

bool isBalanced(TreeNode* root)
{
        int f=1;
        return inorder(root,f);
}
};
