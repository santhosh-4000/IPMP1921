//https://practice.geeksforgeeks.org/problems/sort-a-linked-list/1
//O(nlogn) time and O(logn) space;
class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
    
   static Node* mergeTwoLists(Node* A, Node* B) {
    Node* cur1=A,*cur2=B,*cur=new Node(0);
    Node* head=cur;
    
    while(cur1&&cur2){
        if(cur1->data<=cur2->data){
            cur->next=cur1;
            cur1=cur1->next;
            cur=cur->next;
        }
        else{
            cur->next=cur2;
            cur2=cur2->next;
            cur=cur->next;
        }
    }
    
    while(cur1){
        cur->next=cur1;
        cur1=cur1->next;
        cur=cur->next;
    }
    
    while(cur2){
        cur->next=cur2;
        cur2=cur2->next;
        cur=cur->next;
    }
    cur->next=NULL;
    
    return head->next;
}

static Node* middleNode(Node* head) {
        
        if(head==NULL)
            return NULL;
        
        Node* slow=head,*fast=head;
        while(fast->next){
            fast=fast->next;
            if(fast->next){
                fast=fast->next;
                slow=slow->next;
            }
        }
        
        return slow;
}
    
    Node* mergeSort(Node* head) {
        // your code here
        
        if(head==NULL||head->next==NULL)
            return head;
        
        Node *mid,*head2;
        mid=middleNode(head);
        head2=mid->next;
        mid->next=NULL;
            
        Node* node1   =mergeSort(head);
        Node* node2   =mergeSort(head2);
        
       head= mergeTwoLists(node1,node2);
        
        return head;
    }
};
