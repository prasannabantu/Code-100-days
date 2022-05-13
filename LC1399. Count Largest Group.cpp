// 1399. Count Largest Group
class Solution {
public:

int cdig(int n)
{
        int sum=0;
        while(n)
        {
                sum+=n%10; n/=10;
        }
        return sum;
}

int countLargestGroup(int n)
{
        vector<int>v(37,0);
        for(int i=1; i<=n; i++)
                v[cdig(i)]++;
        int k=*max_element(v.begin(),v.end());
        int c=0;
        for(auto i:v)
                if(k==i) c++;
        return c;
}
};
