class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        vector<int> row(grid[0].size(),0),col(grid.size(),0);
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j])
                {
                    row[j]++;
                    col[i]++;
                }
            }
        }
        int result=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j])
                {
                    result+=row[j]>1||col[i]>1;
                }
            }
        }
        return result;
    }
};