//https://www.interviewbit.com/problems/merge-two-sorted-lists/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode* cur1=A,*cur2=B,*cur=new ListNode(INT_MIN);
    ListNode* head=cur;
    
    while(cur1&&cur2){
        if(cur1->val<=cur2->val){
            cur->next=cur1;
            cur1=cur1->next;
            cur=cur->next;
        }
        else{
            cur->next=cur2;
            cur2=cur2->next;
            cur=cur->next;
        }
    }
    
    while(cur1){
        cur->next=cur1;
        cur1=cur1->next;
        cur=cur->next;
    }
    
    while(cur2){
        cur->next=cur2;
        cur2=cur2->next;
        cur=cur->next;
    }
    cur->next=NULL;
    
    return head->next;
}
