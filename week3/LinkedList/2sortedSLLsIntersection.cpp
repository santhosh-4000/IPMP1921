//https://practice.geeksforgeeks.org/problems/intersection-of-two-sorted-linked-lists/1
//O(m+n) space and time
Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node* head=new Node(INT_MIN),*tmp;
    Node* cur=head;
    while(head1&&head2){
        if(head1->data<head2->data){
            head1=head1->next;
        }
        else if(head1->data==head2->data){
            tmp=new Node(head1->data);
            cur->next=tmp;
            cur=cur->next;
            head1=head1->next;
            head2=head2->next;
        }
        else{
            head2=head2->next;
        }
    }
    
    return head->next;
}
