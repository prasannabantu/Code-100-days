class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int>a(501,0);
        for(auto i:arr)
            a[i]++;
        for(int i=500;i>=1;i--)
            if(a[i]==i) return i;
        return -1;
    }
};
