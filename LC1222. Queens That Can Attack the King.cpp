class Solution {
public:
vector<vector<int> > queensAttacktheKing(vector<vector<int> >& q, vector<int>& k) {
        int n=q.size();
        vector<vector<int> >c(8,vector<int>(8,2));
        for(auto pa:q)
        {
                c[pa[0]][pa[1]]=0;
        }
        vector<vector<int> >ans;
        int i,j;
        i=k[0]; j=k[1];

        // UP
        while(i>=0) {  if(c[i][j]==0) { ans.push_back({i,j}); break; } i--; }

        i=k[0]; j=k[1];
        //Down
        while(i<=7) { if(c[i][j]==0) { ans.push_back({i,j}); break;} i++; }

        i=k[0]; j=k[1];
        //lef
        while(j>=0) { if(c[i][j]==0) { ans.push_back({i,j}); break;} j--; }

        i=k[0]; j=k[1];

        //right
        while(j<=7) { if(c[i][j]==0) { ans.push_back({i,j}); break; } j++;  }

        i=k[0]; j=k[1];
        while(i>=0 && j>=0)
        {
                if(c[i][j]==0) { ans.push_back({i,j}); break;} i--; j--;
        }

        i=k[0]; j=k[1];
        while(i>=0 && j<=7)
        {
                if(c[i][j]==0) { ans.push_back({i,j}); break;} i--; j++;
        }

        i=k[0]; j=k[1];
        while(i<=7 && j<=7)
        {
                if(c[i][j]==0) { ans.push_back({i,j}); break;} i++; j++;
        }

        i=k[0]; j=k[1];
        while(i<=7 && j>=0)
        {
                if(c[i][j]==0) { ans.push_back({i,j}); break;} i++; j--;
        }

        return ans;

}
};
