//https://leetcode.com/problems/rotate-list/submissions/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        ListNode *cur=head,*head2,*end;
        int n=0;
        
        while(cur!=NULL){
            n++;
            end=cur;
            cur=cur->next;
        }
        
        if(n==0||n==1)
            return head;
        k=k%n;
        if(k==0)
            return head;
        
        cur=head;
        
        for(int i=0;i<n-k-1;i++){
            cur=cur->next;
        }
        
        head2=cur->next;
        cur->next=NULL;
        
        end->next=head;
        head=head2;
        
        return head;
        
    }
};
