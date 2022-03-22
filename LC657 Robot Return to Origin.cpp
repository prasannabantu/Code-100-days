// LC657 Robot Return to Origin
class Solution {
public:
    bool judgeCircle(string moves) {
        int la=0; int lo=0;
        int n=moves.size();
        for(int j=0;j<n;j++)
        {
            char i=moves[j];
            if(i=='U') la++;
            else if(i=='D') la--;
            else if(i=='L') lo++;
            else if(i=='R') lo--;
        }
        if(la|lo) return 0;
        return 1;
    }
};
