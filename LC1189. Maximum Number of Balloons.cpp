class Solution {
public:
int maxNumberOfBalloons(string text) {
        //b,a,l,o,n
        int cnt[5]={};
        for(auto c:text)
        {
                if(c=='a')
                        cnt[0]++;
                else if(c=='b')
                        cnt[1]++;
                else if(c=='n')
                        cnt[2]++;
                else if(c=='o')
                        cnt[3]++;
                else if(c=='l')
                        cnt[4]++;
        }
        return min({cnt[0],cnt[1],cnt[2],cnt[3]/2,cnt[4]/2});
}
};
