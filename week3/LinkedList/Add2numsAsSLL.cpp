//https://leetcode.com/problems/add-two-numbers/submissions/
//O(m+n) time m,n l1,l2 sizes O(m+n) space for added list
 ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* lst=new ListNode(INT_MIN);
        ListNode* head=lst;
        
        int sum,c=0;
        while(l1&&l2){
            sum=l1->val+l2->val+c;
            c=sum/10;
            ListNode* tmp=new ListNode(sum%10);
            lst->next=tmp;
            lst=lst->next;
            l1=l1->next;
            l2=l2->next;
        }
        
        while(l1){
            sum=l1->val+c;
            c=sum/10;
            ListNode* tmp=new ListNode(sum%10);
            lst->next=tmp;
            lst=lst->next;
            l1=l1->next;
        }
        
        while(l2){
            sum=l2->val+c;
            c=sum/10;
            ListNode* tmp=new ListNode(sum%10);
            lst->next=tmp;
            lst=lst->next;
            l2=l2->next;
        }
        
        if(c!=0){
            ListNode* tmp=new ListNode(c);
            lst->next=tmp;
        }
        
        return head->next;
    }

//https://leetcode.com/problems/add-two-numbers-ii/submissions/
//most significant digit is first node
//method1: by reversing; O(m+n) time and space
ListNode* reverse(ListNode* head) {
        
       if(head==NULL||head->next==NULL)
           return head;
        
        ListNode* tmp=reverse(head->next);
        head->next->next=head;
        head->next=NULL;
        
        return tmp;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverse(l1);
        l2=reverse(l2);
        ListNode* lst=new ListNode(INT_MIN);
        ListNode* head=lst;
        
        int sum,c=0;
        while(l1&&l2){
            sum=l1->val+l2->val+c;
            c=sum/10;
            ListNode* tmp=new ListNode(sum%10);
            lst->next=tmp;
            lst=lst->next;
            l1=l1->next;
            l2=l2->next;
        }
        
        while(l1){
            sum=l1->val+c;
            c=sum/10;
            ListNode* tmp=new ListNode(sum%10);
            lst->next=tmp;
            lst=lst->next;
            l1=l1->next;
        }
        
        while(l2){
            sum=l2->val+c;
            c=sum/10;
            ListNode* tmp=new ListNode(sum%10);
            lst->next=tmp;
            lst=lst->next;
            l2=l2->next;
        }
        
        if(c!=0){
            ListNode* tmp=new ListNode(c);
            lst->next=tmp;
        }
        
        head=head->next;
        head=reverse(head);
        
        return head;
    }

//without modifing lists
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> s1,s2;
        
        ListNode* cur=NULL;
        //ListNode* cur=res;
        
        while(l1){
            s1.push(l1->val);
            l1=l1->next;
        }
        
        while(l2){
            s2.push(l2->val);
            l2=l2->next;
        }
        
        int sum,c=0;
        while((!s1.empty())&&(!s2.empty())){
            sum=s1.top()+s2.top()+c;
            ListNode* tmp=new ListNode(sum%10);
            c=sum/10;
            s1.pop();
            s2.pop();
            tmp->next=cur;
            cur=tmp;
        }
        
        while(!s1.empty()){
            sum=s1.top()+c;
            ListNode* tmp=new ListNode(sum%10);
            c=sum/10;
            s1.pop();
            tmp->next=cur;
            cur=tmp;
        }
        
        while(!s2.empty()){
            sum=s2.top()+c;
            ListNode* tmp=new ListNode(sum%10);
            c=sum/10;
            s2.pop();
            tmp->next=cur;
            cur=tmp;
        }
        
        if(c!=0){
            ListNode* tmp=new ListNode(c);
            tmp->next=cur;
            cur=tmp;
        }
        
        return cur;
    }







