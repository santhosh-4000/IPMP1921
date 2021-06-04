//https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/

//O(nlogn) time and O(n) space
 TreeNode* sortedListToBST(ListNode* head) {
        
        if(head==NULL)
            return NULL;
        
        if(head->next==NULL)
            return new TreeNode(head->val);
        
        ListNode* fast=head->next,*mid_prev=NULL,*mid=head;
        
    //o-n
        while(fast->next){
            fast=fast->next;
            mid_prev=mid;
            mid=mid->next;
            if(fast->next)
            fast=fast->next;
        }
        
        
        
        TreeNode* root=new TreeNode(mid->val);
        
        if(mid_prev!=NULL)
        {
            mid_prev->next=NULL;
            root->left=sortedListToBST(head);//t(n/2)
        }
        
        root->right=sortedListToBST(mid->next);//t(n/2)
        
        return root;
    }

//M2:

//o-n time o-h stack 
int count(ListNode* head){
        int count=0;
        while(head){
            count++;
            head=head->next;
        }
        return count;
    }
    
    TreeNode* sortedListToBSTUtil(ListNode** head, int n){
        if(n==0){
            return NULL;
        }
        
        if(n==1){
            int k=(*head)->val;
            (*head)=(*head)->next;
            return new TreeNode(k);
        }
        
        TreeNode* lt=sortedListToBSTUtil(head,(n+1)/2-1);
        
        TreeNode* root=new TreeNode((*head)->val);
        (*head)=(*head)->next;
        
        root->left=lt;
        root->right=sortedListToBSTUtil(head,n/2);
        
        return root;
    }
    
    TreeNode* sortedListToBST(ListNode* head) {
        
        int n=count(head);//o-n
        
        return sortedListToBSTUtil(&head,n);    //o-n
    }
