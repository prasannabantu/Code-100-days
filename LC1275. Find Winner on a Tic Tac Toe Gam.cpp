class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        int c=0;
        vector<vector<char>>grid(3,vector<char>(3,'i'));
        int pre='X';
        for(auto m:moves)
        {
            grid[m[0]][m[1]]=pre;
            pre= pre=='X'? 'O':'X';
            c++;
        }

        vector<string>str(8,"");
        for(int i=0;i<3;i++)
        {
        str[i]=grid[i][0];
        str[i]+=grid[i][1];
        str[i]+=grid[i][2];
        str[i+3]+=grid[0][i];
        str[i+3]+=grid[1][i];
        str[i+3]+=grid[2][i];
        }
        str[6]=grid[0][0];
        str[6]+=grid[1][1];
        str[6]+=grid[2][2];

        str[7]=grid[0][2];
        str[7]+=grid[1][1];
        str[7]+=grid[2][0];

        for(int i=0;i<=7;i++)
        {
            if(str[i]=="XXX") return "A";
            else if (str[i]=="OOO") return "B";
        }
        if(c<9)  return "Pending";
        return "Draw";


    }
};
