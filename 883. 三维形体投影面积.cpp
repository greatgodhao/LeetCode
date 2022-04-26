class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int ans = 0;
        int n = grid.size();
        for(int i = 0; i < n; i++)
        {
            int x = 0, y = 0;
            for(int j = 0; j < n; j++)
            {
                ans += grid[i][j] > 0 ? 1 : 0;
                x = max(x, grid[i][j]);
                y = max(y, grid[j][i]);
            }
            ans += x;
            ans += y;
        }
        return ans;
    }
};
