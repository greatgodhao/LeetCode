class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n = s.length();
        vector<int> diff(n, 0);
        for(int i = 0;i < n;i++) {
            diff[i] = abs(s[i] - t[i]);
        }
        int maxlen = 0, sum = 0;
        for(int i = 0, j = 0;j < n;j++) {
            sum += diff[j];
            while(sum > maxCost) {
                sum -= diff[i++];
            }
            maxlen = max(maxlen, j - i + 1);
        }
        return maxlen;
    }
};
