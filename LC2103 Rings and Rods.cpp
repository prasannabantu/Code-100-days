//LC2103 Rings and Rods
class Solution {
public:
    int countPoints(string rings) {
        int n=rings.size();
        vector<int>ans(10,1);
        for(int i=n-1;i>=1;i=i-2)
        {
            if(rings[i-1]=='R')
            ans[rings[i]-'0']*=2;
            if(rings[i-1]=='G')
            ans[rings[i]-'0']*=3;
            if(rings[i-1]=='B')
            ans[rings[i]-'0']*=5;
        }

        int c=0;
        for(auto i:ans)
            if(i%2==0 && i%3==0 && i%5==0) c++;
        return c;
    }
};
