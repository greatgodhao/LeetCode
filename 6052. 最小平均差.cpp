const int N = 100010;
long long s[N];

class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long ans = -1, res = 1e9;
        int n = nums.size();
        if(n == 1) return 0;
        for(int i = 1; i <= n; i++) {
            s[i] = s[i - 1] + nums[i - 1];
        }
        for(int i = 1; i <= n; i++) {
            int avg;
            if(i == n) {
                avg = abs((s[i] / i) - 0);
            }
            else {
                avg = abs((s[i] / i) - (s[n] - s[i]) / (n - i));
            }
            if(res > avg) {
                ans = i - 1;
                res = avg;
            }
        }
        return ans;
    }
};
