class Solution:
    def minDeletionSize(self, strs: List[str]) -> int:
        list1 = []
        count = 0
        for i in range(len(strs[0])):
            list1 = sorted(strs, key=lambda x : x[i])
            if list1 != strs: 
                count+=1
        return count
        
