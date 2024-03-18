/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // stack<int> st;
        // ListNode* temp=head;
        // while(temp!=NULL){
        //     st.push(temp->val);
        //     temp=temp->next;
        // }
        // ListNode* res=new ListNode();
        // ListNode* ans=res;
        // while(!st.empty()){
        //     ListNode* k=new ListNode(st.top());
        //     res->next=k;
        //     st.pop();
        //     res=res->next;
        // }
        // return ans->next;
        ListNode* prev=NULL;
        ListNode* temp=head;
        while(temp!=nullptr){
            ListNode* next=temp->next;
            temp->next=prev;
            prev=temp;
            temp=next;
        }
        return prev;
    }
};