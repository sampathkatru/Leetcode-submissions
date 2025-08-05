class Solution {
private:
    void dfs(std::vector<std::vector<int>>& grid, int i, int j) {
        if (i < 0 || i >= grid.size() || j < 0 || j >=grid[0].size() || grid[i][j] != 1) return;

        grid[i][j] = -1;
        dfs(grid, i+1, j);
        dfs(grid, i-1, j);
        dfs(grid, i, j+1);
        dfs(grid, i, j-1);
    }
public:
    int numEnclaves(vector<vector<int>>& grid) {
        const int m = grid.size();
        const int n = grid[0].size();
        for (int i = 0; i < m; ++i) {
            dfs(grid, i , 0);
            dfs(grid, i, n-1);
        }

        for (int i = 0; i < n; ++i) {
            dfs(grid, 0, i);
            dfs(grid, m-1, i);
        }

        int count = 0;
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[0].size(); ++j) {
                if (grid[i][j] == 1) ++count;
            }
        }

        return count;
    }
};