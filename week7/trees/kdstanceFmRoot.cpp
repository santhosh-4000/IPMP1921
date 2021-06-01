//https://practice.geeksforgeeks.org/problems/k-distance-from-root/1#

//o-n time o-h space
void KdistanceUtil(struct Node *root, int k, 
vector<int>& ans){
    if(root==NULL) return;
    
    if(k==0){
        ans.push_back(root->data);
    }
    
    KdistanceUtil(root->left,k-1,ans);
    KdistanceUtil(root->right,k-1,ans);
    
}

vector<int> Kdistance(struct Node *root, int k)
{
  // Your code here
  vector<int> ans;
  KdistanceUtil(root,k,ans);
  
  return ans;
  
}
