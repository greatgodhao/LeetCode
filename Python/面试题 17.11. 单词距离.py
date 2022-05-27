class Solution:
    def findClosest(self, words: List[str], word1: str, word2: str) -> int:
        ans = len(words)
        idx1, idx2 = -1, -1
        for i, word in enumerate(words):
            if word == word1:
                idx1 = i
            elif word == word2:
                idx2 = i
            if idx1 >= 0 and idx2 >= 0:
                ans = min(ans, abs(idx1 - idx2))
        return ans
