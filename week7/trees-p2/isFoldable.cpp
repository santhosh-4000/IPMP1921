//https://practice.geeksforgeeks.org/problems/foldable-binary-tree/1

//o-n time o-h stack

bool IsFoldableUtil(Node* root1, Node* root2){
    
    if(root1==NULL&&root2==NULL)
    return 1;
    
    if(root1==NULL||root2==NULL)
        return 0;
    
    return IsFoldableUtil(root1->left,root2->right)&&
            IsFoldableUtil(root1->right,root2->left);
    
}

bool IsFoldable(Node* root)
{
    // Your code goes here
    if(root==NULL)
        return 1;
    
  return  IsFoldableUtil(root->left,root->right);
}

//https://leetcode.com/problems/symmetric-tree/submissions/

//
bool IsFoldableUtil(TreeNode* root1, TreeNode* root2){
    
    if(root1==NULL&&root2==NULL)
    return 1;
    
    if(root1==NULL||root2==NULL)
        return 0;
    
    return (root1->val==root2->val)&&
        IsFoldableUtil(root1->left,root2->right)&&
            IsFoldableUtil(root1->right,root2->left);
    
}
    
    bool isSymmetric(TreeNode* root) {
         if(root==NULL)
        return 1;
    
  return  IsFoldableUtil(root->left,root->right);
    }
