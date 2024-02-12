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
    public ListNode reverse(ListNode head){
       ListNode prev = null;
       ListNode curr = head;
       ListNode next = null;

       while(curr!= null){
           next = curr.next;
           curr.next = prev;
           prev= curr;
           curr= next;
       }

       head = prev;
       return head;
    }
    public ListNode mid(ListNode head){
        ListNode fast= head;
        ListNode slow = head;

        while(fast !=null && fast.next!= null){
            slow = slow.next;
            fast = fast.next.next;
        }
        return slow;
    }
    public void reorderList(ListNode head) {
        if(head == null)
        return ;
        ListNode fast= head;
        ListNode slow = head;

        while(fast !=null && fast.next!= null){
            slow = slow.next;
            fast = fast.next.next;
        }
        ListNode secondHalf = reverse(slow.next);
        slow.next = null;  
        ListNode firstHalf = head;


        while (firstHalf != null && secondHalf != null) {
            ListNode temp1 = firstHalf.next;
            ListNode temp2 = secondHalf.next;

            firstHalf.next = secondHalf;
            secondHalf.next = temp1;

            firstHalf = temp1;
            secondHalf = temp2;
        }
        
        
    }
}