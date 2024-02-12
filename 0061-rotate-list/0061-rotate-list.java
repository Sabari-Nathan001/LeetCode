class Solution {
    public ListNode rotateRight(ListNode head,int k) {
        //edge cases
        if(head==null || k==0){
            return head;
        }
        //find length
        ListNode tail=head;
        int len=1;
        while(tail.next!=null){
            tail=tail.next;
            len++;
        }
        //go till last node;
        tail.next=head;
        k=k%len;
        k=len-k;
        while(k>0){
            tail=tail.next;
            k--;
        }
        //make the node head and break connection
        head=tail.next;
        tail.next=null;
        
        return head;
    }
}