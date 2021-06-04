//https://leetcode.com/problems/recover-binary-search-tree/submissions/

//o-n time and space
vector<int> v;
    
    void inorder(TreeNode* root){
        if(root==NULL)
            return;
        
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    
    void inorderFill(TreeNode* root,int& i){
        if(root==NULL)
            return;
        
        inorderFill(root->left,i);
        root->val=v[i++];
        inorderFill(root->right,i);
    }
    
    void recoverTree(TreeNode* root) {
        inorder(root);
        
        int i=-1,j=-1;
        for(int k=0;k+1<v.size();k++){
            if(v[k]>v[k+1]){
                if(i==-1){
                    i=k;
                }
                else{
                    j=k+1;
                    break;
                }
            }
        }
        //cout<<i<<" "<<j;
        
        if(i!=-1&&j!=-1) { 
        cout<<v[i]<<v[j];
        swap(v[i],v[j]);
        cout<<v[i]<<v[j];
        }
        else if(i!=-1)
        swap(v[i],v[i+1]); 
        
        int k=0;
        inorderFill(root,k);
        
    }


//https://leetcode.com/problems/recover-binary-search-tree/submissions/

//using single inorder traversal
//o-n time const space excl stack
class Solution {
    TreeNode* first=NULL,*middle=NULL,*last=NULL;
public:
    
    void inorder(TreeNode* cur, TreeNode** prev){
        if(cur==NULL)
            return;
        inorder(cur->left,prev);
        if(*prev!=NULL&&(*prev)->val>cur->val){
            if(first==NULL){
                first=*prev;
                middle=cur;
            }
            else{
                last=cur;
            }
        }
        *prev=cur;
        inorder(cur->right,prev);
    }
    
    void recoverTree(TreeNode* root) {
        TreeNode* prev=NULL;
        inorder(root,&prev);
        
        if(last==NULL){
            int tmp=first->val;
            first->val=middle->val;
            middle->val=tmp;
            return;
        }
            
            int tmp=first->val;
            first->val=last->val;
            last->val=tmp;
        
    }






    
