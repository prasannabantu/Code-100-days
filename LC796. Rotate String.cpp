class Solution {
public:
void rot(string &s,int n)
{
        char t=s[0];
        for(int i=0; i<n-1; i++)
                s[i]=s[i+1];
        s[n-1]=t;
}
bool rotateString(string s, string goal)
{
        int n=s.size();
        for(int i=0; i<n; i++)
        {
                if(s==goal) return 1;
                rot(s,n);
        }
        return 0;
}
};
