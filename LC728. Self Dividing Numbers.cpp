
class Solution {
public:
    bool isself(int n)
    {
        int t=n; int flag=0;
        while(n)
        {
            int temp=n%10; if(temp==0) return 0;
            if(t%temp!=0) return 0;
            n/=10;
        }
        return 1;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++)
        {
            if(isself(i)) ans.push_back(i);
        }
        return ans;
    }
};
