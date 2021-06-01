//

//o-n time o-h space

//o-h t&s
int left_depth(Node *root){
        if(root==NULL) return 0;
        if(root->left)
        return 1+left_depth(root->left);
        
        return 1+left_depth(root->right);
    }
    
//o-n t and o-h space
    bool checkUtil(Node *root, int tmp, int lvl){
        if(root==NULL) return true;
        if(!root->left&&!root->right) return lvl==tmp;
        
        return checkUtil(root->left,tmp,lvl+1)&&
            checkUtil(root->right,tmp,lvl+1);
    }
    
    bool check(Node *root)
    {
        //Your code here
        int tmp=left_depth(root);
        return checkUtil(root,tmp,1);
        
    }

//iterative soln can also be done by storing firts encountered leaf height
