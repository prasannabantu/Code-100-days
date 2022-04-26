class Solution {
public:

bool isnum(char c)
{
        return c<='9' && c>='1';
}

bool boxcheck(vector<vector<char> >& board,int r,int c)
{
        set<int>se;
        int dirRow[9] = { -1, -1, -1, 0, 0, 0, 1, 1, 1 };
        int dirCol[9] = { -1, 0, 1, -1, 0, 1, -1, 0, 1 };


        for (int i = 0; i < 9; i++)
        {
                int nextRow = r + dirRow[i];
                int nextCol = c + dirCol[i];

        }
        for(int i=0; i<3; i++)
                for(int j=0; j<3; j++)
                {

                        if(isnum(board[i][j]))
                        {
                                int k=se.size();
                                se.insert(board[i][j]-'0')
                                if(k==se.size()) return 0;
                        }
                }
        return 1;
}

bool isValidSudoku(vector<vector<char> >& board)
{

}
};
