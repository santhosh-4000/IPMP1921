//https://practice.geeksforgeeks.org/problems/print-bst-elements-in-given-range/1

//o-n time and o-h space
void printNearNodesUtil(Node *root, int low, int high, 
vector<int>& ans){
    if(root==NULL) return;
    
    if(root->data>low)
    printNearNodesUtil(root->left,low,high,ans);
  
    if(root->data>=low&&root->data<=high)
    ans.push_back(root->data);
  
    if(root->data<=high)
    printNearNodesUtil(root->right,low,high,ans);
}

vector<int> printNearNodes(Node *root, int low, int high)
{
  // your code goes here  
  vector<int> ans;
  printNearNodesUtil(root,low,high,ans);
  return ans;
}

