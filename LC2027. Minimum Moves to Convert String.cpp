// 2027. Minimum Moves to Convert String
class Solution {
public:
int minimumMoves(string s) {
        int c=0;
        int n=s.size();
        for(int i=0; i<n; i++)
        {
                if(s[i]=='X')
                {
                        s[i]='O';
                        if(i<n-1) s[i+1]='O';
                        if(i<n-2) { s[i+2]='O'; i+=2;}
                        c++;

                }
        }
        return c;
}
};
