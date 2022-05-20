class Solution:
    def findRightInterval(self, intervals: List[List[int]]) -> List[int]:
        for i, interval in enumerate(intervals):
            interval.append(i)
        intervals.sort()

        n = len(intervals)
        ans = [-1] * n
        # print(intervals)
        for _, end, id in intervals:
            i = bisect_left(intervals, [end])
            # print(i)
            if i < n:
                ans[id] = intervals[i][2]
        return ans

