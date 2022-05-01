class Solution {
public:
    int minimumCardPickup(vector<int>& c) {
        unordered_map<int, int> mp;
        int ans = 1e9;
        for(int i = 0, j = 0; j < c.size(); j++) {
            mp[c[j]]++;
            while(i < j && mp[c[j]] > 1) {
                ans = min(ans, j - i + 1);
                mp[c[i]]--;
                i++;
            }
        }
        if(ans == 1e9) return -1;
        return ans;
    }
};
