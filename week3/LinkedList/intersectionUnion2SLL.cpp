//https://practice.geeksforgeeks.org/problems/intersection-of-two-linked-list/1
//O(m+n) time and space
Node* findIntersection(Node* head1, Node* head2)
    {
        // code here
        // return the head of intersection list
        unordered_set<int> st;
        
        while(head2){
            st.insert(head2->data);
            head2=head2->next;
        }
        
        Node* head=new Node(INT_MIN);
        Node* cur=head,*tmp;
        
        while(head1){
            if(st.find(head1->data)!=st.end()){
                tmp=new Node(head1->data);
                cur->next=tmp;
                cur=cur->next;
            }
            head1=head1->next;
        }
        
        return head->next;
    }

//Union O(m+n) time and space
Node* findUnion(Node* head1, Node* head2)
    {
        // code here
        // return the head of intersection list
        unordered_set<int> st;
        Node* head=new Node(INT_MIN);
        Node* cur=head,*tmp;
  
        while(head2){
            st.insert(head2->data);
            head2=head2->next;
            tmp=new Node(head1->data);
                cur->next=tmp;
                cur=cur->next;
        }
        
        
        
        while(head1){
            if(st.find(head1->data)==st.end()){
                tmp=new Node(head1->data);
                cur->next=tmp;
                cur=cur->next;
            }
            head1=head1->next;
        }
        
        return head->next;
    }

//we can also use sorting with 
Node* mergeTwoLists(Node* A, Node* B) {
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

Node* middleNode(Node* head) {
        
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

struct Node* makeUnion(struct Node* head1, struct Node* head2)
{
    head1=mergeSort(head1);
    head2=mergeSort(head2);
    
    Node* Result= new Node(-1);
    Node * head=Result;/**cur1=head1,*cur2=head2*/;
    
    while(head1&&head2){
        if(head1->data<head2->data){
            if(head1->data!=Result->data){
            Result->next=new Node(head1->data);
            Result=Result->next;
            }
            head1=head1->next;
        }
        else if(head1->data==head2->data){
            if(head1->data!=Result->data){
            Result->next=new Node(head1->data);
            Result=Result->next;
            }
            head1=head1->next;
            head2=head2->next;
        }
        else{
            if(head2->data!=Result->data){
            Result->next=new Node(head2->data);
            Result=Result->next;
            }
            head2=head2->next;
        }
    }
    
    while(head1){
        if(head1->data!=Result->data){
            Result->next=new Node(head1->data);
            Result=Result->next;
        }
            head1=head1->next;
    }
    while(head2){
            if(head2->data!=Result->data){
            Result->next=new Node(head2->data);
            Result=Result->next;
            }
            head2=head2->next;
    }
    
    return head->next;
    
}
