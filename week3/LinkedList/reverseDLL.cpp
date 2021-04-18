//https://www.hackerrank.com/challenges/reverse-a-doubly-linked-list/problem
//O(n) and O(1)
DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {

    DoublyLinkedListNode *cur=head,*tmp;
    
    if(head==NULL||head->next==NULL) return head;
    
    while(cur){
        tmp=cur->prev;
        cur->prev=cur->next;
        cur->next=tmp;
        cur=cur->prev;
    }
    
    return tmp->prev;
}

//recursive
DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {

    if(head==NULL) return NULL;
    
    DoublyLinkedListNode* tmp=head->next;
    head->next=head->prev;
    head->prev=tmp;
    
    if(head->prev==NULL)
        return head;
    
    
    return reverse(head->prev);
}
