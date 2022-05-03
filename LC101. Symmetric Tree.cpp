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
bool isSame(TreeNode* p,TreeNode* q)
{
        if(p==NULL && q==NULL) return 1;
        if((p!=NULL && q==NULL)||(p==NULL && q!=NULL)) return 0;
        if(p->val!=q->val) return 0;
        if(isSame(p->left,q->right) && isSame(p->right,q->left)) return 1;
        return 0;
}

bool isSymmetric(TreeNode* root) {
        if(root==NULL) return 1;
        return isSame(root->left,root->right);


}
};
