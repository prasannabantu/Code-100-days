class Solution {
public:
bool isValidSudoku(vector<vector<char> >& board) {
        vector<int>col(9);
        vector<int>grid(9);
        for(int i=0; i<9; i++)
        {
                int row=0;
                for(int j=0; j<9; j++)
                {
                        if(board[i][j]!='.')
                        {
                                int t=board[i][j]-'1';
                                int f=1<<t;
                                if(row&f || col[j] & f || grid[(i/3)*3+j/3] &f) return 0;
                                row|=f;
                                col[j]|=f;
                                grid[(i/3)*3+j/3]|=f;
                        }
                }
        }
        return 1;
}
};
