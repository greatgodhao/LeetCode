class Solution {
    int dfs(string s, int k, int l, int r) {
        if(l > r) {
            return 0;
        }
        int i;
        int hash[256];
        memset(hash, 0, sizeof(hash));
        for(int i = l;i <= r;i++) {
            hash[s[i] - 'a']++;
        }
        int last = l, val;
        int maxlen = 0, flag = 0;
        for(i = l;i <= r;i++) {
            if(hash[s[i] - 'a'] < k) {
                val = dfs(s, k, last, i - 1);
                maxlen = max(maxlen, val);
                last = i + 1;
                flag = 1;
            }
        }
        if(flag == 0) {
            return r - l + 1;
        }
        val = dfs(s, k, last, i - 1);
        maxlen = max(maxlen, val);
        last = i + 1;
        return maxlen;
    }
public:
    int longestSubstring(string s, int k) {
        int n = s.size();
        return dfs(s, k, 0, n - 1);
    }
};
