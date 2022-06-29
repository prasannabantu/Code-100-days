class Solution {
public:
int minTimeToType(string word) {
        int cnt=word.size();
        char pos='a';
        for(auto c:word)
        {
                cnt+=min(abs(c-pos),26-(c-pos));
                pos=c;
        }
        return cnt;
}
};
