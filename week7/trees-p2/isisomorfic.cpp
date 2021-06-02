//https://practice.geeksforgeeks.org/problems/check-if-tree-is-isomorphic/1#

//o(min(n,m)) n,m-nodes in t1,t2 stack space o-hmin
bool isIsomorphic(Node *root1,Node *root2)
    {
    //add code here.
        if(root1==NULL&&root2==NULL)
            return true;
        if(root1!=NULL&&root2!=NULL){
            if(root1->data==root2->data)
            return (isIsomorphic(root1->left,root2->left)&&
                    isIsomorphic(root1->right,root2->right))||
                    (isIsomorphic(root1->left,root2->right)&&
                    isIsomorphic(root1->right,root2->left));
            
        }
        
        return false;
    }
