//https://practice.geeksforgeeks.org/problems/minimum-element-in-bst/1

//o-n t
int minValue(Node* root)
{
    // Code here
    if(root==NULL) return -1;
    if(root->left==NULL)
        return root->data;
    return minValue(root->left);
}

//o-n t
int minValue(Node* root)
{
    // Code here
    if(root==NULL) return -1;
    
    Node* cur=root;
    while(cur->left){
        cur=cur->left;
    }
    return cur->data;
}
