//https://leetcode.com/problems/remove-nth-node-from-end-of-list/
ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *first=head,*second=head,*prev=NULL;
        n--;
        while(n>0&&first->next!=NULL) {
            first=first->next;
            n--;
        }
        
        if(n!=0) return NULL;
        if(!first->next){
            ListNode *tmp=head;
            head=head->next;
            delete(tmp);
            return head;
        }
        
        while(first->next){
            first=first->next;
            prev=second;
            second=second->next;
        }
        
        prev->next=second->next;
        delete(second);
        return head;
        
    }
