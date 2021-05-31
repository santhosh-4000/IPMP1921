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
