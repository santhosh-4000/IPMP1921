//https://practice.geeksforgeeks.org/problems/delete-alternate-nodes/1
//O(n) and O(1)
void deleteAlt(struct Node *head){
    // Code here
    Node *cur=head,*tmp=NULL;
    while(cur){
        tmp=cur->next;
        if(tmp){
            cur->next=tmp->next;
            delete(tmp);
        }
        cur=cur->next;
    }
}
