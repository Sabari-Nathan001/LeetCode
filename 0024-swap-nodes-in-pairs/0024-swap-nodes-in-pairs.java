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
        ListNode prev=res;
        while(head!=null && head.next!=null){
            ListNode first=head;//1
            ListNode second=head.next;//2
            
            prev.next=second;//-1 -> 2
            first.next=second.next;// 1 -> 3
            second.next=first;// 1 <- 2
            
            prev=first; //prev:1 
            head=first.next;//head:2
        }
        return res.next;
    }
}