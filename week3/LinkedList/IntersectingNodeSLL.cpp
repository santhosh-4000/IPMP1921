//https://leetcode.com/problems/intersection-of-two-linked-lists/submissions/
//O(m+n) time O(1) space m,n sizes of 2 SLL
 ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        int n1=0,n2=0;
        ListNode* cur1=headA,*cur2=headB;
        
        while(cur1){
            n1++;
            cur1=cur1->next;
        }
        while(cur2){
            n2++;
            cur2=cur2->next;
        }
        int diff;
        if(n1>n2){
            cur1=headA;
            cur2=headB;
            diff=n1-n2;
        }
        else{
            cur2=headA;
            cur1=headB;
            diff=n2-n1;
        }
        
        while(diff--){
            cur1=cur1->next;
        }
        
        while(cur1&&cur2){
            if(cur1==cur2)
                return cur1;
            cur1=cur1->next;
            cur2=cur2->next;
        }
        
        return NULL;
    }
//making cycle in 1st LL and finding cycle start node from 2nd LL
//create hash for first LL and find 2nd LL nodes
//to just check if there is intersection point compare last nodes of list
//2 ptr tecnique is also possible
