


class Solution {
public:
int inorder(TreeNode* root,int &val,int &mini)
{
        if(root->left) inorder(root->left,val,mini);
        if(val>=0) mini=min(mini,root->val-val);
        val=root->val;
        if(root->right) inorder(root->right,val,mini);
        return mini;

}
int getMinimumDifference(TreeNode* root) {
        int val=-1;
        int mini=INT_MAX;
        return inorder(root,val,mini);
}
};



class Solution {
public:
void inorder(TreeNode* root,vector<int>&order)
{
        if(root)
        {
                inorder(root->left,order);
                order.push_back(root->val);
                inorder(root->right,order);
        }
}

int getMinimumDifference(TreeNode* root) {
        vector<int>order;
        inorder(root,order);
        int mini=INT_MAX;
        for(int i=1; i<order.size(); i++)
                mini=min(mini,order[i]-order[i-1]);
        return mini;
}
};
