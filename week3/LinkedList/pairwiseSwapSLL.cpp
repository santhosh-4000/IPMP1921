//https://leetcode.com/problems/swap-nodes-in-pairs/submissions/
//O(n) time O(1) space
ListNode* swapPairs(ListNode* head) {
        
        if(head==NULL||head->next==NULL){
            return head;
        }
        
        ListNode *cur=head,*tmp;
        
        head=cur->next;
        
        while(cur&&cur->next){
            tmp=cur->next->next;
            cur->next->next=cur;
            if(tmp&&tmp->next)
                cur->next=tmp->next;
            else
                 cur->next=tmp;
            cur=tmp;
        }
        
        return head;
    }
//we can just swap data also here
