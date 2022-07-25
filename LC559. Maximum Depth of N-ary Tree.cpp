class Solution {
public:
int helper(Node* root,int depth)
{
        if(!root) return depth;
        depth++;
        int maxi=depth;
        for(auto node:root->children)
        {
                maxi=max(maxi,helper(node,depth));
        }
        return maxi;
}
int maxDepth(Node* root) {
        if(!root) return 0;
        return helper(root,0);
}
};
