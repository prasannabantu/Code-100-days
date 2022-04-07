class Solution {
public:
    int removeElement(vector<int>& a, int val) {

        vector<int>ans;
        for(auto i:a)
        {
            if(i!=val) ans.push_back(i);
        }
        a=ans;
        return ans.size();

    }
};
