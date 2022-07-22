
//Second attempt
class Solution {
public:
int findHeight(TreeNode* root)
{
        if(root)
        {
                return 1+max(findHeight(root->left),findHeight(root->right));
        }
        return 0;
}

bool isBalanced(TreeNode* root) {
        if(root==NULL) return 1;
        return abs(findHeight(root->left)-findHeight(root->right))<=1 && isBalanced(root->left) && isBalanced(root->right);
}
};





// First attempt
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
