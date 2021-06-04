//https://practice.geeksforgeeks.org/problems/binary-tree-to-dll/1

//o-n t o-h s
void doLeft(Node *root, Node** prev){
        if(root==NULL)
            return;
        
        doLeft(root->left,prev);
        root->left=*prev;
        *prev=root;
        
        doLeft(root->right,prev);
    }
    
//o-n
    Node* doRight(Node* cur, Node* next){
        
        while(cur){
            cur->right=next;
            next=cur;
            cur=cur->left;
        }
        
        return next;
    }
    
    Node * bToDLL(Node *root)
    {
        // your code here
        Node* prev=NULL,*next=NULL;
        doLeft(root,&prev);
        
        return doRight(prev,next);
    }
