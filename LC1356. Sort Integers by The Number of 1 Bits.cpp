class Solution {
public:
    static bool cmp(int a,int b)
    {
        int l1=__builtin_popcount(a);
        int l2=__builtin_popcount(b);
        if(l1<l2) return 1;
        if(l1==l2 && a<b) return 1;
        return 0;
    }
    vector<int> sortByBits(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end(),cmp);
        return arr;
    }
};
