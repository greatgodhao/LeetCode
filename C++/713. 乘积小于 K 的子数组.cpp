class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int cnt = 0;
        int s = 1;
        for(int i = 0, j = 0; j < nums.size(); j++)
        {
            s *= nums[j];
            while(i <= j && s >= k)
            {
                s /= nums[i];
                i++;
            }
            cnt += j - i + 1;
        }
        return cnt;
    }
};
