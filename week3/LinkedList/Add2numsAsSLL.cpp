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
