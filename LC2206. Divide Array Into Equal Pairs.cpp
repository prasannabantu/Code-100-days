class Solution {
public:
bool divideArray(vector<int>& nums) {
        vector<int>a(501,0);
        for(auto i:nums)
                a[i]++;
        for(int i=1; i<=500; i++)
                if(a[i]%2==1) return 0;
        return 1;
}
};
