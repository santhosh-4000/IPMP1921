//https://www.geeksforgeeks.org/remove-all-nodes-which-lie-on-a-path-having-sum-less-than-k/


//o-n time o-h stack space
Node* delSumUtil(Node* root, int k,int &sum){
    if(root==NULL){
        return NULL;
    }
    int ls,rs;
    ls=sum+root->data;
    rs=ls;
    
    root->left=delSumUtil(root->left,k,ls);
    root->right=delSumUtil(root->right,k,rs);
    
    sum=ls>rs?ls:rs;
    
    if(sum<k){
        delete root;
        return NULL;
    }
    
    return root;
}

Node* delSum(Node* root, int k){
    int sum=0;
    return delSumUtil(root,k,sum);
}
