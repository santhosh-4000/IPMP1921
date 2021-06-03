//https://leetcode.com/problems/check-completeness-of-a-binary-tree/submissions/

//o-n time and space
int size(TreeNode* root){
        if(root==NULL) return 0;
        
        return 1+size(root->left)+size(root->right);
    }
    
    bool isCompleteTree(TreeNode* root) {
        if(root==NULL) 
            return true;
        int n1=size(root),n2=0;//o-n
        
        queue<TreeNode*> q;
        q.push(root);
        
        //o-n
        while(!q.empty()){
            TreeNode* tmp=q.front();
            q.pop();
            n2++;
            
            if(tmp->left)
                q.push(tmp->left);
            else
                break;
            if(tmp->right)
                q.push(tmp->right);
            else
                break;  
        }
        
        return n1==n2+q.size();
    }

//m2
//
 bool isCompleteTree(TreeNode* root) {
        if(root==NULL) 
            return true;
        
        bool flag=false;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            
            TreeNode* tmp=q.front();
            q.pop();
            
            if(tmp->left){
                
                if(flag==true)
                    return false;
                
                q.push(tmp->left);
            }
            else
                flag=true;
            
            if(tmp->right){
                if(flag==true)
                    return false;
                
                q.push(tmp->right);
            }
            else
                flag=true;  
        }
        
       return true;
    }
