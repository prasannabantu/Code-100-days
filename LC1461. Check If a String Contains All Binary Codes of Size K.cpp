
class Solution {
public:


bool hasAllCodes(string s, int k) {

        int n=s.size();
        if(n==1) return 0;
        if(k>=n) return 0;
        unordered_set<int>se;
        int sum=0;
        for(int i=0; i<k; i++)
        {
                sum=sum*2+(s[i]-'0');
        }
        se.insert(sum);


        int val=(int)pow(2,k-1);
        // int allones=~(1<<k)

        for(int i=1; i<=n-k; i++)
        {
                sum=sum-((s[i-1]-'0')*val);
                sum=sum*2+(s[i+k-1]-'0');
                se.insert(sum);
        }

        int total=(int) pow(2,k);
        if(se.size()==total) return 1;
        return 0;

}
};
