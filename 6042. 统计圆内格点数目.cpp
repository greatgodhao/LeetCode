class Solution {
public:
    int countLatticePoints(vector<vector<int>>& circles) {
        int ans = 0;
        vector<vector<int>> res(201, vector<int>(201, 0));
        for(auto c : circles) {
            for(int i = 0; i < 201; i++) {
                for(int j = 0; j < 201; j++) {
                    if(abs(i - c[0]) * abs(i - c[0]) + abs(j - c[1]) * abs(j - c[1]) <= c[2] * c[2] && res[i][j] == 0) {
                        res[i][j] = 1;
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};
