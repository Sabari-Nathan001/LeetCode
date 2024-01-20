/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        if(l1==null) return l2;
        if(l2==null) return l1;

        //l1->smaller l2->larger(always)---> iterative method so swapping accordingly
        if(l1.val>l2.val){
            ListNode temp=l1;
            l1=l2;
            l2=temp;
        }

        ListNode ans=l1;
        while(l1!=null && l2!=null){
            ListNode temp=null;

            //until l2 becomes small
            while(l1!=null && l1.val<=l2.val){
                temp=l1;
                l1=l1.next;
            }
            //when l2 becomes smaller then change the arrow to l2
            temp.next=l2;

            //swapping because l2 should be larger
            ListNode tmp=l1;
            l1=l2;
            l2=tmp;
        }
        return ans;
    }
}