

class Solution {
public:
void helper(Node* root,vector<int>&res)
{
        if(!root) return;
        for(auto node:root->children)
        {
                helper(node,res);
        }
        res.push_back(root->val);
}
vector<int> postorder(Node* root) {
        vector<int>res;
        helper(root,res);
        return res;
}
};
