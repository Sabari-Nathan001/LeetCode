/**
 * Definition for a binary tree node.
 * public class TreeNode {
 * int val;
 * TreeNode left;
 * TreeNode right;
 * TreeNode() {}
 * TreeNode(int val) { this.val = val; }
 * TreeNode(int val, TreeNode left, TreeNode right) {
 * this.val = val;
 * this.left = left;
 * this.right = right;
 * }
 * }
 */
class Solution {
    public class pair {
        int withrob = 0;
        int withoutrob = 0;
    }
    public pair maxPrice(TreeNode root){
        if(root == null){
            return new pair();
        }

        pair l = maxPrice(root.left);
        pair r = maxPrice(root.right);

        pair myans = new pair();

        myans.withrob = l.withoutrob + r.withoutrob + root.val;
        myans.withoutrob = Math.max(l.withrob,l.withoutrob) + Math.max(r.withoutrob,r.withrob);

        return myans;
    }
    public int rob(TreeNode root) {
        pair profit = maxPrice(root);
        return Math.max(profit.withrob, profit.withoutrob);
    }
}