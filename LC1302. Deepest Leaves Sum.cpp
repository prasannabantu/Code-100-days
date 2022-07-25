
class Solution {
public:
int c=0;
int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        if(!root) return 0;
        int tsum=0;
        while(!q.empty())
        {
                int n=q.size();
                tsum=0;
                for(int i=0; i<n; i++)
                {
                        TreeNode* t=q.front(); q.pop();
                        tsum+=t->val;
                        if(t->left) q.push(t->left);
                        if(t->right) q.push(t->right);
                }
        }
        return tsum;
}
};
