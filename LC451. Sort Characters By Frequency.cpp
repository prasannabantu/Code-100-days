class Solution {
public:
static bool cmp(pair<int,int>a,pair<int,int>b)
{
        return a.second>b.second;
}
string frequencySort(string s) {
        vector<int>cnt(128,0);
        for(auto c:s)
                cnt[c]++;
        vector<pair<int,int> >v;
        for(int i=0; i<128; i++)
        {
                v.push_back({i,cnt[i]});
        }

        sort(v.begin(),v.end(),cmp);
        // for(int i=0;i<128;i++)
        //     cout<<v[i].first<<"--"<<v[i].second<<"\n";
        int i=0;
        for(int j=0; j<128; j++)
        {
                for(int k=0; k<v[j].second; k++)
                        s[i++]= (char) (v[j].first);
        }
        return s;
}
};
