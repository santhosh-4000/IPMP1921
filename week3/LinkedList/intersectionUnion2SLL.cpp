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
