class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    # 返回构造的TreeNode根节点
    def reConstructBinaryTree(self, pre, tin):
        # write code here
        """
        构建二叉树
        """
        if not pre or not tin:
            return None
        index = tin.index(pre[0])
        left = tin[0:index]
        right = tin[index+1:]
        root = TreeNode(pre[0])
        root.left = self.reConstructBinaryTree(pre[1:1+len(left)], left)
        root.right = self.reConstructBinaryTree(pre[-len(right):], right)
        return root