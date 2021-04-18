//https://www.hackerrank.com/challenges/delete-duplicate-value-nodes-from-a-sorted-linked-list/problem
//O(n) time and O(1) space
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {

    SinglyLinkedListNode* cur=head,*tmp;
    
    while(cur){
        while(cur->next&&cur->data==cur->next->data){
            tmp=cur->next;
            cur->next=cur->next->next;
            delete(tmp);
        }
        cur=cur->next;
    }
    
    return head;
}
