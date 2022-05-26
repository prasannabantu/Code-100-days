class Solution {
public:
string kthDistinct(vector<string>& arr, int k) {
        map<string,int>mp;
        int c=0;
        for(auto s:arr)
        {
                mp[s]++;
        }

        for(auto s:arr)
        {
                if(mp[s]==1)
                        c++;
                if(c==k) return s;
        }
        return "";
}
};
