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
