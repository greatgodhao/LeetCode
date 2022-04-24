class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> ans;
        unordered_map<int, int> mp;
        for(auto n : nums) {
            for(auto a : n) {
                mp[a]++;
            }
        }
        for(auto n : nums) {
            for(auto a : n) {
                if(mp[a] == nums.size() && count(ans.begin(), ans.end(), a) == 0) {
                    ans.push_back(a);
                }
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
