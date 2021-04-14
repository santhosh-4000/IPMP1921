//https://leetcode.com/problems/reverse-linked-list/submissions/
//iterative O(n) tme O(1) space
ListNode* reverseList(ListNode* head) {
        
        ListNode *cur=head,*tmp=NULL,*prev=NULL;
        
        while(cur){
            
            tmp=cur->next;
            cur->next=prev;
            prev=cur;
            cur=tmp;
        }
        
        return prev;
    }
};
//recursive also possible O(n) time and O(1) stack space
 ListNode* reverseList(ListNode* head) {
        
       if(head==NULL||head->next==NULL)
           return head;
        
        ListNode* tmp=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        
        return tmp;
    }
