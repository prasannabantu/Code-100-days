class Solution {
public:
int countConsistentStrings(string allowed, vector<string>& words) {
        int cnt[26]={};
        for(auto c:allowed) cnt[c-'a']++;
        int count=0;
        for(auto word:words)
        {
                int f=0;
                for(auto i:word)
                {
                        if(cnt[i-'a']==0) f=1;
                }
                if(f==0) count++;
        }
        return count;
}
};
