/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public void inorderTraversal(TreeNode root, List<Integer> inorderList){
        if(root==null)
            return;
        inorderTraversal(root.left,inorderList);
        inorderList.add(root.val);
        inorderTraversal(root.right,inorderList);
    }
    public TreeNode constructBST(List<Integer> list, int start, int end){
        if(start>end)
            return null;
        int mid=start+(end-start)/2;
        TreeNode root=new TreeNode(list.get(mid));
        root.left=constructBST(list,start,mid-1);
        root.right=constructBST(list,mid+1,end);
        return root;
    }
    public TreeNode balanceBST(TreeNode root) {
        if(root==null)
            return root;
        List<Integer> list=new ArrayList<>();
        inorderTraversal(root,list);
        return constructBST(list,0,list.size()-1);
    }
}