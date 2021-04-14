//https://leetcode.com/problems/linked-list-cycle/submissions/

//floyd cycle detect algo
//O(n) time and O(1) space
ool hasCycle(ListNode *head) {
        
        if(head==NULL)
            return false;
        
        ListNode* slow=head,*fast=head->next;
        while(fast&&fast->next){
            if(slow==fast)
                return true;
            fast=fast->next->next;
            slow=slow->next;
        }
        
        return false;
    }
//2.hashing with unordered set
//3.By modifiing ll struct
