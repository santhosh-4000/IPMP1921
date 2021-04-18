//https://leetcode.com/problems/swapping-nodes-in-a-linked-list/submissions/
//O(n) time and O(1) space
//swapping node data
ListNode* swapNodes(ListNode* head, int k) {
        int c=1;
        ListNode* cur1=head,*cur2=head,*tmp;
        while(c<k){
            cur1=cur1->next;
            c++;
        }
        tmp=cur1;
        while(cur1->next){
            cur1=cur1->next;
            cur2=cur2->next;
        }
        
        swap(tmp->val, cur2->val);
        
        return head;
    }
