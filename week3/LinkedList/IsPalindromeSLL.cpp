//
//
bool isPalindrome(ListNode* head) {
        
        if(head==NULL||head->next==NULL)
            return true;
        
        ListNode *first=head,*second=head,*head2;
  //O(n)
        while(first->next){
            first=first->next;
            if(first->next){
                first=first->next;
                second=second->next;
            }
        }
        
        head2=second->next;
        second->next=NULL;
        
  //O(n)
        head2=reverseList(head2);
        first=head2;
        
        bool flag=true;
  //O(n)
        while(head2){
            if(head2->val!=head->val){
                flag=false;
                break;
            }
            head2=head2->next;
            head=head->next;
        }
        
  //O(n)
        first=reverseList(first);
        second->next=first;
        
        return flag;
        
    }
    
