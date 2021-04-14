//https://leetcode.com/problems/linked-list-cycle-ii/submissions/
//similar type
ListNode *detectCycle(ListNode *head) {
        if(head==NULL)
            return NULL;
        bool flag=false;
        ListNode *fast=head->next,*slow=head;
        
        while(fast&&fast->next){
            if(slow==fast){
                flag=true;
                break;
            }
            fast=fast->next->next;
            slow=slow->next;
        }
        
        
        if(!flag)
            return NULL;
        
        slow=head;
        fast=fast->next;
        
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        
        return slow;
    }

//https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1#
//actual problem
 void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        if(head==NULL)
            return ;
        bool flag=false;
        Node *fast=head->next,*slow=head;
        
        while(fast&&fast->next){
            if(slow==fast){
                flag=true;
                break;
            }
            fast=fast->next->next;
            slow=slow->next;
        }
        
        
        if(!flag)
            return ;
        
        slow=head;
        fast=fast;
        
        while(slow!=fast->next){
            slow=slow->next;
            fast=fast->next;
        }
        
        fast->next=NULL;
        
    }
