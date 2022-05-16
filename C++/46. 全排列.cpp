const int N = 1e6;
int path[N];
bool st[N];

class Solution {
public:
    vector<vector<int>> ans;
    void dfs(int u, vector<int>& nums, int n)
    {
        if(u == n)
        {
            vector<int> v;
            for(int i = 0; i < n; i++)
            {
                v.push_back(path[i] - 10);
            }
            ans.push_back(v);
            return;
        }
        for(int i = 0; i < n; i++)
        {
            // nums[i] += 10;
            if(!st[nums[i] + 10])
            {
                path[u] = nums[i] + 10;
                st[nums[i] + 10] = true;
                dfs(u + 1, nums, n);
                st[nums[i] + 10] = false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        dfs(0, nums, nums.size());
        return ans;
    }
};


