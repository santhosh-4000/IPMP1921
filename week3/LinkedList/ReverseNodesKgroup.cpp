//https://leetcode.com/problems/reverse-nodes-in-k-group/submissions/
//O(n) time O(n/k) space;
//recursively reverse k groups
ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(head==NULL)
            return head;
        
        ListNode *cur=head,*prev=NULL,*tmp=NULL;
        int count=0;
        
        while(cur&&count<k){
            tmp=cur->next;
            cur->next=prev;
            prev=cur;
            cur=tmp;
            count++;
        }
        
        if(count!=k){
            cur=prev;
            prev=NULL;
            while(cur){
            tmp=cur->next;
            cur->next=prev;
            prev=cur;
            cur=tmp;
        }
            return prev;
        }
        
        if(cur!=NULL)
          head->next= reverseKGroup(cur, k);
        
        return prev;
    }
//O(n) time and O(1) space
//iterative
ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(head==NULL) return NULL;
        
        int count=0;
        ListNode* cur=head,*tmp=NULL,
        *prev=NULL,*h1,*res=new ListNode(INT_MIN);
        
        ListNode* cur2=res,*prev2=NULL;
        
        do{
            h1=cur;
            count=0;
            prev=NULL;
            while(cur&&count<k){
                tmp=cur->next;
                cur->next=prev;
                prev=cur;
                cur=tmp;
                count++;
            } 
            prev2=cur2;
            cur2->next=prev;
            cur2=h1;
        }while(count==k);//O(n)
        
            
            cur=prev;
            prev=NULL;
            while(cur){
            tmp=cur->next;
            cur->next=prev;
            prev=cur;
            cur=tmp;
            }
            prev2->next=prev;
        
        
        return res->next;
    }
