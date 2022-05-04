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

vector<int>a;
void inorder(TreeNode* root)
{
        if(root)
        {
                inorder(root->left);
                a.push_back(root->val);
                inorder(root->right);
        }
}
bool findTarget(TreeNode* root, int k) {
        inorder(root);

        int n=a.size();
        int i=0; int j=n-1;
        while(i<j)
        {
                int temp=a[i]+a[j];
                if(temp==k) return 1;
                if(temp<k) i++;
                else j--;
        }
        return 0;
}
};
