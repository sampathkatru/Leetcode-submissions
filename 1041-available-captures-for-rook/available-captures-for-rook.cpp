class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int n=board.size(),m=board[0].size(),count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]=='R')
                {
                    for(int row=i;row<n;row++)
                    {
                        if(board[row][j]=='p')
                        {
                            count++;
                            break;
                        }
                        else if(board[row][j]=='B') break;
                    }
                    for(int col=j;col<m;col++)
                    {
                        if(board[i][col]=='p')
                        {
                            count++;
                            break;
                        }
                        else if(board[i][col]=='B') break;
                    }
                    for(int row=i;row>-1;row--)
                    {
                        if(board[row][j]=='p')
                        {
                            count++;
                            break;
                        }
                        else if(board[row][j]=='B') break;
                    }
                    for(int col=j;col>-1;col--)
                    {
                        if(board[i][col]=='p')
                        {
                            count++;
                            break;
                        }
                        else if(board[i][col]=='B') break;
                    }
                }
            }
        }
        return count;
    }
};