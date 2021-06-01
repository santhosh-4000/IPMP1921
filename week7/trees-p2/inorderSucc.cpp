//

//o-n time o-h stack space
Node * inOrderSuccessor(Node *root, Node *x)
    {
        //Your code here
        if(root==NULL) return NULL;
        
        
        Node* tmp=inOrderSuccessor(root->right,x);
        
        if(tmp!=NULL)
        return tmp;
        
        if(root==x) return prev;
        
        prev=root;
        
        return inOrderSuccessor(root->left,x);
        
    }


//o-h time const space
Node * inOrderSuccessor(Node *root, Node *x)
    {
        //Your code here
        
        if(x->right){
            x=x->right;
            while(x->left){
                x=x->left;
            }
            return x;
        }
        
        Node* prev=NULL,*cur=root;
        
        while(cur!=NULL){
            if(cur->data>x->data){
            prev=cur;
            cur=cur->left;
            }
            else if(cur->data==x->data)
            return prev;
          
            else
            cur=cur->right;
        }
        
        
        
        return prev;
    }
