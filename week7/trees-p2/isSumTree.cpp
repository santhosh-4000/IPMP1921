//https://practice.geeksforgeeks.org/problems/sum-tree/1#

//o-n time
bool isLeaf(Node* root){
        if(root==NULL) return 0;
        if(root->left==NULL&&root->right==NULL)
            return 1;
        return 0;
    }
    
    bool isSumTree(Node* root)
    {
         // Your code here
         if(root==NULL||isLeaf(root))
            return 1;
        
        bool t1=isSumTree(root->left);
        bool t2=isSumTree(root->right);
        int ls,rs;
        if(t1&&t2){
            if(root->left==NULL)
                ls=0;
            else if(isLeaf(root->left))
                ls=root->left->data;
            else
                ls=2*root->left->data;
                
            if(root->right==NULL)
                rs=0;
            else if(isLeaf(root->right))
                rs=root->right->data;
            else
                rs=2*root->right->data;
                
            return root->data == ls+rs;
        }
        
        return 0;
    }
