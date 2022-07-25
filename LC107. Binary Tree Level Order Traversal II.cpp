class Solution {
public:
vector<vector<int> > levelOrderBottom(TreeNode* root) {
        vector<vector<int> >res;
        if(!root) return res;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
                int n=q.size();
                vector<int>tmp;
                for(int i=0; i<n; i++)
                {
                        TreeNode* t=q.front(); q.pop();
                        tmp.push_back(t->val);
                        if(t->left) q.push(t->left);
                        if(t->right) q.push(t->right);

                }
                res.push_back(tmp);
        }
        reverse(res.begin(),res.end());
        return res;
}
};
