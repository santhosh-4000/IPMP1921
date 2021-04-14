//https://leetcode.com/problems/delete-node-in-a-linked-list/submissions/
    void deleteNode(ListNode* node) {
        
        node->val=node->next->val;
        ListNode *tmp=node->next;
        node->next=tmp->next;
        delete(tmp);
    }
