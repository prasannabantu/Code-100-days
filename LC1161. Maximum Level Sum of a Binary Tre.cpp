class Solution {
public:
int maxLevelSum(TreeNode* root) {
        int maxi=INT_MIN;
        int maxpos=0;
        queue<TreeNode*>q;
        if(!root) return 0;
        q.push(root);
        int level=0;
        while(!q.empty())
        {
                int tsum=0;
                int n=q.size();
                level++;
                for(int i=0; i<n; i++)
                {
                        TreeNode* t=q.front(); q.pop();
                        tsum+=t->val;
                        if(t->left) q.push(t->left);
                        if(t->right) q.push(t->right);
                }
                if(maxi<tsum)
                {
                        maxi=tsum;
                        maxpos=level;
                }

        }
        return maxpos;
}
};
