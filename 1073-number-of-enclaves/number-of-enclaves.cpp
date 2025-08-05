class Solution {
public:
    int check(vector<vector<int>>& grid, int i, int j, int n, int m, bool &flag) {
        stack<pair<int, int>> stk;
        stk.push({i, j});
        grid[i][j] = -1;
        int count = 1;

        if(i == 0 || j == 0 || i == n-1 || j == m-1) flag = true;

        vector<pair<int, int>> dirs = {{1,0}, {-1,0}, {0,1}, {0,-1}};

        while(!stk.empty()) {
            auto [x, y] = stk.top();
            stk.pop();

            for(auto [dx, dy] : dirs) {
                int nx = x + dx, ny = y + dy;
                if(nx >= 0 && ny >= 0 && nx < n && ny < m && grid[nx][ny] == 1) {
                    if(nx == 0 || ny == 0 || nx == n-1 || ny == m-1) flag = true;
                    grid[nx][ny] = -1;
                    stk.push({nx, ny});
                    count++;
                }
            }
        }

        return count;
    }

    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size(), result = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 1) {
                    bool flag = false;
                    int val = check(grid, i, j, n, m, flag);
                    if(!flag) result += val;
                }
            }
        }

        return result;
    }
};
