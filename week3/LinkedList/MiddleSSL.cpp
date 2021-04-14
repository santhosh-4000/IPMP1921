//https://leetcode.com/problems/middle-of-the-linked-list/submissions/
ListNode* middleNode(ListNode* head) {
        
        if(head==NULL)
            return NULL;
        
        ListNode* slow=head,*fast=head;
        while(fast->next){
            fast=fast->next;
            slow=slow->next;
            if(fast->next){
                fast=fast->next;
            }
        }
        
        return slow;
      
