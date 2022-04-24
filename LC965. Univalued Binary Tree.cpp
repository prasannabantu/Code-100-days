// 965. Univalued Binary Tree
int f=0; int t; int flag=1;
bool isUnivalTree(TreeNode* root) {
        if(f==0) { f=1; t=root->val;}
        if(root)
        {
                isUnivalTree(root->left);
                if(root->val!=t) flag=0;
                isUnivalTree(root->right);
        }
        return flag;
}
