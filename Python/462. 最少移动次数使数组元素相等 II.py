class Solution:
    def minMoves2(self, nums: List[int]) -> int:
        nums.sort()
        return sum(abs(i - nums[len(nums) // 2]) for i in nums)
