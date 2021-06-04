//https://practice.geeksforgeeks.org/problems/remove-bst-keys-outside-given-range/1/

//o-n t and o-h stack
Node* removekeys(Node* root, int l, int r) {
        // code here
        if(root==NULL) return NULL;
        
        if(root->data>r)
            return removekeys(root->left,l,r);
        if(root->data<l)
            return removekeys(root->right,l,r);
            
        root->left=removekeys(root->left,l,r);
        root->right=removekeys(root->right,l,r);
        
        return root;
   }
