/**
 * Definition for binary tree
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
public class Solution {
    public TreeNode reConstructBinaryTree(int [] pre,int [] in) {
        if (pre.length == 0 || in.length == 0)
            return null;
        TreeNode root = helper(pre, 0, pre.length - 1, in, 0, in.length - 1);
        return root;
    }
    public TreeNode helper(int[] pre, int preBeg, int preEnd, int[] in, int inBeg, int inEnd) {
        if(preEnd < preBeg || inEnd < inBeg)
            return null;
        TreeNode root = new TreeNode(pre[preBeg]);
        for (int i = inBeg; i <= inEnd; i++) {
            if (in[i] == pre[preBeg]) {
                root.left = helper(pre, preBeg + 1, preBeg + i - inBeg, in, inBeg, i - 1);
                root.right = helper(pre, preBeg + i - inBeg + 1, preEnd , in, i + 1, inEnd);
                break;
            }
        }
        return root;
    }
}
