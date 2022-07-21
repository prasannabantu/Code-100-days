class Solution {
public:

vector<vector<int> > updateMatrix(vector<vector<int> >& mat) {
        int m=mat.size();
        int n=mat[0].size();
        if(m==0) return mat;
        vector<vector<int> >dist(m,vector<int>(n,INT_MAX));
        queue<pair<int,int> >q;
        for(int i=0; i<m; i++)
        {
                for(int j=0; j<n; j++)
                {
                        if(mat[i][j]==0)
                        {
                                dist[i][j]=0;
                                q.push({i,j});
                        }
                }
        }

        int dir[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
        while(!q.empty())
        {
                pair<int,int> cur=q.front();
                q.pop();
                for(int i=0; i<4; i++)
                {
                        int x=cur.first+dir[i][0];
                        int y=cur.second+dir[i][1];
                        if(x>=0 && y>=0 && x<m && y<n)
                        {
                                if(dist[x][y]>dist[cur.first][cur.second]+1)
                                {
                                        dist[x][y]=dist[cur.first][cur.second]+1;
                                        q.push({x,y});
                                }
                        }
                }
        }
        return dist;
}
};
