// 289. Game of Life
class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int xc[8]={-1,-1,0,1,1, 1, 0,-1};
        int yc[8]={ 0, 1,1,1,0,-1,-1,-1};
        int nx,ny;
        int ac=0;

        int m=board.size();
        int n=board[0].size();

        vector<vector<int>>ans(m+2,vector<int>(n+2,0));
        for(int i=1;i<=m;i++)
            for(int j=1;j<=n;j++)
            {
                ans[i][j]=board[i-1][j-1];
            }

        for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
        {
             ac=0;
             for(int k=0;k<8;k++)
             {
                 nx=xc[k]+i; ny=yc[k]+j;
                 if(ans[nx][ny]==1) ac++;
             }
             if(board[i-1][j-1]==1)
             {
                 if(ac<2) board[i-1][j-1]=0;
                 else if(ac>3) board[i-1][j-1]=0;
             }
            else
            {
                if(ac==3) board[i-1][j-1]=1;
            }


        }



    }
};
