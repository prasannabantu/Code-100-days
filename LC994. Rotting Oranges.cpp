class Solution {
public:
int orangesRotting(vector<vector<int> >& g){
        int m=g.size();
        int n=g[0].size();
        int fresh=0;
        int dir[4][2]={{-1,0},{1,0},{0,1},{0,-1}};
        queue<pair<int,int> >q;
        for(int i=0; i<m; i++)
        {
                for(int j=0; j<n; j++)
                {
                        if(g[i][j]==2)
                        {
                                q.push({i,j});
                        }
                        else if(g[i][j]==1)
                        {
                                fresh++;
                        }
                }

        }


        // cout<<fresh;
        if(fresh==0) return 0;
        if(q.size()==0) return -1;
        int time=-1;
        while(!q.empty())
        {

                int no=q.size();
                for(int i=0; i<no; i++)
                {
                        pair<int,int>cur=q.front();
                        q.pop();
                        for(int k=0; k<4; k++)
                        {
                                int x=cur.first+dir[k][0];
                                int y=cur.second+dir[k][1];
                                if(x>=0 && y>=0 && x<m && y<n)
                                {
                                        if(g[x][y]==1)
                                        {
                                                fresh--;
                                                g[x][y]=2;
                                                q.push({x,y});
                                        }
                                }
                        }
                }
                time++;

        }
        if(fresh>0) return -1;

        return time;






}
};
