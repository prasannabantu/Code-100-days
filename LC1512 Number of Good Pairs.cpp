// 1512. Number of Good Pairs

class Solution {
public:
    int numIdenticalPairs(vector<int>& a) {
        int n=a.size();
        int count=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]==a[j]) count++;
            }
        }
        return count;
    }
};

class Solution {
public:
    int numIdenticalPairs(vector<int>& a) {
        int n=a.size();
        vector<int>ans(101,0);
        for(int i=0;i<n;i++)
            ans[a[i]]++;
        int count=0;
        for(int i=0;i<=100;i++)
            if(ans[i]>0)
            count+=nn(ans[i]-1);
        return count;
    }

    int nn(int n)
    {
        return (n*(n+1))/2;
    }
};
