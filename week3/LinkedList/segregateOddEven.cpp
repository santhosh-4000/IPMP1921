//https://practice.geeksforgeeks.org/problems/segregate-even-and-odd-nodes-in-a-linked-list5035/1#
//O(n) time and O(1) space
 Node* divide(int N, Node *head){
        // code here
        Node *evenSt=new Node(-1), *oddSt=new Node(-1);
        Node *cur1=evenSt,*cur2=oddSt,*cur=head;
        
        while(cur){
            if(cur->data&1){
                cur2->next=cur;
                cur2=cur2->next;
            }
            else{
                cur1->next=cur;
                cur1=cur1->next;
            }
            cur=cur->next;
        }
        
        evenSt=evenSt->next;
        oddSt=oddSt->next;
        
        if(evenSt==NULL||oddSt==NULL)
        return head;
        
        cur1->next=oddSt;
        cur2->next=NULL;
        
        return evenSt;
    }
