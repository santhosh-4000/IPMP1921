//https://www.hackerrank.com/challenges/insert-a-node-into-a-sorted-doubly-linked-list/problem
//O(n) 
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    
    DoublyLinkedListNode* cur=head,
            *newNode=new DoublyLinkedListNode(data),
            *prev=NULL;
    
    if(head==NULL||head->data>data){
        newNode->next=head;
        newNode->prev=NULL;
        if(head)
        head->prev=newNode;
        
        return newNode;
    }
    
    while(cur&&cur->data<data){
        prev=cur;
        cur=cur->next;
    }
    
    if(cur){
    cur->prev->next=newNode;
    cur->prev=newNode;
    }
    else
    prev->next=newNode;
    
    newNode->prev=prev;
    newNode->next=cur;
    
    return head;
}
