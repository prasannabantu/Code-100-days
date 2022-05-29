class Solution {
public:
bool digitCount(string num) {
        int cnt[10]={};
        for(auto n:num)
                cnt[n-'0']++;
        int n=num.size();
        for(int i=0; i<n; i++)
        {
                if(cnt[i]!=num[i]-'0') return 0;

        }
        return 1;
}
};
