//A very similar ques O(n) time and O(1) space
//https://leetcode.com/problems/odd-even-linked-list/submissions/
ListNode* oddEvenList(ListNode* head) {
        if(head==NULL||head->next==NULL)
            return head;
        
        ListNode *head1=head,*head2=head->next;
        ListNode* cur1=head1,*cur2=head2;
        head=head->next->next;
        while(head){
            head1->next=head;
            head1=head1->next;
            head=head->next;
            if(head){
            head2->next=head;
            head2=head1->next;
            head=head->next;
            }
        }
        
        head1->next=cur2;
        head2->next=NULL;
        
        return cur1;
    }
