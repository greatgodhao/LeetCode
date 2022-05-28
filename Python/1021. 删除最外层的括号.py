class Solution:
    def removeOuterParentheses(self, s: str) -> str:
        res, stack = "", []
        for i in s:
            if i == ')':
                stack.pop()
            if stack:
                res += i
            if i == '(':
                stack.append(i)
        return res
