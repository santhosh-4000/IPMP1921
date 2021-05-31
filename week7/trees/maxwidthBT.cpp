//https://practice.geeksforgeeks.org/problems/maximum-width-of-tree/1

//width - no. of nodes in each level
//o-n time and o-w space w-width of tree
int getMaxWidth(Node* root)
    {   
        if(root==NULL) return 0;
        queue<Node*> q;
        
        q.push(root);
        int ans=0;
        while(!q.empty()){
            int n=q.size();
            ans=max(n,ans);
            while(n--){
                Node* tmp=q.front();
                q.pop();
                if(tmp->left)
                q.push(tmp->left);
                if(tmp->right)
                q.push(tmp->right);
            }
        }
        
        return ans;
        
    }

//https://leetcode.com/problems/maximum-width-of-binary-tree/

//here,width is sort of diatance between end nodes in each level
//o-n time and o-w space
int widthOfBinaryTree(TreeNode* root) {
        
        if(root==NULL) return 0;
        
        queue<pair<TreeNode*,int>> q;
        
        q.push({root,0});
        int maxWidth=1;
        
        while(!q.empty()){
            
            int n=q.size();
            
            int dec=q.back().second;
            //cout<<dec<<endl;
            
            maxWidth=max(maxWidth,q.back().second
                         -q.front().second + 1 ); 
            while(n--){
                TreeNode* tmp=q.front().first;
                int idx=q.front().second;
                
                //cout<<idx<<" ";
                
                q.pop();
                if(tmp->left)
                q.push({tmp->left,2*idx+1-dec});
                if(tmp->right)
                q.push({tmp->right,2*idx+2-dec});
            }
            //cout<<endl;
            
                                        //cout<<maxWidth<<endl;
        }
        
        return maxWidth;
    }
