LC999 Available Captures for Rook

class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int n=8;

        //Finding the rook
        int rx,ry;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                if(board[i][j]=='R') rx=i,ry=j;
        }
        int c=0;

        //left
        int l=ry;
        while(l>=0 && board[rx][l]!='B')
        {

            if(board[rx][l]=='p')
            { ++c; break;}
              l--;
              if(l<0) break;
        }

        //rigt
        int r=ry;
         while(r<=7 && board[rx][r]!='B')
        {

            if(board[rx][r]=='p')
            { ++c; break;}
              r++;
             if(r>7) break;
        }

        //Up

        int u=rx;
         while(u>=0 && board[u][ry]!='B')
        {

            if(board[u][ry]=='p')
            { ++c; break;}
                u--;
             if(u<0) break;
        }

        //Down
        int d=rx;
         while(d<=7 && board[d][ry]!='B')
        {

            if(board[d][ry]=='p')
            { ++c; break;}
              d++;
             if(d>7) break;
        }
        return c;
    }
};
