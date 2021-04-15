//https://www.interviewbit.com/problems/reverse-alternate-k-nodes/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//O(n) time and O(n/k) space
//recursive
ListNode* Solution::solve(ListNode* A, int B) {
    if(A==NULL) return NULL;
    
    ListNode* cur=A,*prev=NULL,*tmp=NULL;
    int count=0;
    
    while(cur&&count<B){
        tmp=cur->next;
        cur->next=prev;
        prev=cur;
        cur=tmp;
        count++;
    }
    
    A->next=cur;
    count=0;
    while(cur&&count<B){
        tmp=cur;
        cur=cur->next;count++;
    }
    
    if(cur!=NULL)
        tmp->next=solve(cur,B);
        
    return prev;
    
}
//iterative with O(n) time and O(1) space is possible
