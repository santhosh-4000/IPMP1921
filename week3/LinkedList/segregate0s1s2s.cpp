//https://practice.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1
//O(n) and O(1)
Node* segregate(Node *head) {
        
        // Add code here
        int arr[3]={0};
        Node *cur=head;
        while(cur){
            arr[cur->data]++;
            cur=cur->next;
        }
        
        cur=head;
        
        while(arr[0]--){
            cur->data=0;
            cur=cur->next;
        }
        
        while(arr[1]--){
            cur->data=1;
            cur=cur->next;
        }
        
        while(arr[2]--){
            cur->data=2;
            cur=cur->next;
        }
        
        return head;
    }
