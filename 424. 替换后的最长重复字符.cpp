class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        int hash[128];
        int kcnt, maxlen = 0;
        for(int l = 'A';l <= 'Z';l++) {
            kcnt = 0;
            int i = 0,j = 0;
            while(j < n) {
                kcnt += (s[j] == l) ? 0 : 1;
                while(kcnt > k) {
                    kcnt -= (s[i] == l) ? 0 : 1;
                    i++;
                }
                maxlen = max(maxlen, j - i + 1);
                j++;
            }
        }
        return maxlen;
    }
};
