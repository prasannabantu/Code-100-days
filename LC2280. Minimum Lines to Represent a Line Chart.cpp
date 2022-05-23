class Solution {
public:
int minimumLines(vector<vector<int> >& sp) {
        int n=sp.size();
        if(n==1) return 0;
        if(n==2) return 1;
        sort(sp.begin(),sp.end());
        int c=1;
        for(int i=2; i<n; i++)
        {
                if((long)(sp[i-1][1]-sp[i-2][1])*(sp[i][0]-sp[i-1][0])!=(long)(sp[i-1][0]-sp[i-2][0])*(sp[i][1]-sp[i-1][1])) c++;
        }

        return c;
}
};
