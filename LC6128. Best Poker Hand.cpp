class Solution {
public:
vector<string>arr={"Flush","Three of a Kind","Pair","High Card"};

string bestHand(vector<int>& ranks, vector<char>& suits) {
        vector<int>fcount(4,0);
        for(auto c:suits) fcount[c-'a']++;
        for(int i=0; i<4; i++) if(fcount[i]==5) return arr[0];

        vector<int>ra(14,0);
        for(auto num:ranks) ra[num]++;

        for(int i=0; i<14; i++) if(ra[i]>=3) return arr[1];
        for(int i=0; i<14; i++) if(ra[i]==2) return arr[2];

        return arr[3];

}
};
