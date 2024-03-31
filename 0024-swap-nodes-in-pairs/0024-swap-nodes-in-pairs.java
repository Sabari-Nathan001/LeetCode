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
    public ListNode swapPairs(ListNode head) {
        ListNode res=new ListNode(-1);
        res.next=head;
        ListNode temp=res;
        while(temp.next!=null && temp.next.next!=null){
            ListNode first=temp.next;
            ListNode second=temp.next.next;
            
            first.next=second.next;
            second.next=first;
            temp.next=second;
            temp=temp.next.next;
        }
        return res.next;
    }
}