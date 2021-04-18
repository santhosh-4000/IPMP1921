//https://practice.geeksforgeeks.org/problems/delete-n-nodes-after-m-nodes-of-a-linked-list/1#
//O(n) time
void linkdelete(struct Node  *head, int M, int N)
    {
        //Add code here   
        Node* cur=head,*prev;
        int c=1;
        
        
        while(cur){
            c=1;
        while(cur->next&&c<M){
            cur=cur->next;
            c++;
        }
        
        prev=cur;
        c=1;
        while(cur->next&&c<=N){
            cur=cur->next;
            c++;
        }
        
        if(cur){
        prev->next=cur->next;
        cur=cur->next;
        }
        
        }
    }
