class Solution:
    def isUnivalTree(self, root: TreeNode) -> bool:
        if not root:
            return True
        
        if root.left:
            if root.val != root.left.val or not self.isUnivalTree(root.left):
                return False
        
        if root.right:
            if root.val != root.right.val or not self.isUnivalTree(root.right):
                return False
        
        return True

