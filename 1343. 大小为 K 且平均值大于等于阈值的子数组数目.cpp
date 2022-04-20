// 给你一个整数数组 arr 和两个整数 k 和 threshold 。
// 请你返回长度为 k 且平均值大于等于 threshold 的子数组数目。
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int cnt = 0;
        int sum = 0;
        for(int i = 0, j = 0;j < arr.size();) {
            sum += arr[j];
            int len = j - i + 1;
            if(len == k) {
                if(sum / len >= threshold) cnt++;
                sum -= arr[i];
                i++;
            }
            j++;
        }
        return cnt;
    }
};
