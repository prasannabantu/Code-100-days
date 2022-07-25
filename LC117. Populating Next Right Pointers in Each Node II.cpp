class Solution {
public:
Node* connect(Node* root) {
        queue<Node*>q;
        if(!root) return root;
        q.push(root);
        while(!q.empty())
        {
                int n=q.size();
                for(int i=0; i<n; i++)
                {

                        Node* t=q.front(); q.pop();
                        if(i==n-1) t->next==NULL;
                        else t->next=q.front();
                        if(t->left) q.push(t->left);
                        if(t->right) q.push(t->right);
                }
        }
        return root;
}
};
