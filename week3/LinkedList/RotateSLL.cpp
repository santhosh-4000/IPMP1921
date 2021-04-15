//https://leetcode.com/problems/rotate-list/submissions/
class Solution {
public:
    
    int listSize(ListNode* head){
        int n=0;
        while(head){
            head=head->next;
            n++;
        }
        return n;
    }
    
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head==NULL||head->next==NULL)
                return head;
        
        int n=listSize(head);
        
        k=k%n;
        if(k==0)
            return head;
        
        ListNode* cur=head,*head2;
        int c=n-k-1;
        while(c--){
            cur=cur->next;
        }
        head2=cur->next;
        cur->next=NULL;
        
        cur=head2;
        while(cur->next!=NULL){
            cur=cur->next;
        }
        cur->next=head;
        return head2;
    }
};
