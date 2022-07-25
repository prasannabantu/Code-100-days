class Solution {
public:
vector<vector<int> > levelOrder(Node* root) {
        vector<vector<int> >res;
        if(root==NULL) return res;
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
                int n=q.size();
                vector<int>temp;
                for(int i=0; i<n; i++)
                {
                        Node* t=q.front(); q.pop();
                        temp.push_back(t->val);
                        for(auto node:t->children)
                                if(node) q.push(node);
                }
                res.push_back(temp);
        }
        return res;
}
};
