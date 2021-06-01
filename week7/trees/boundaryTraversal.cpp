//https://practice.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1#

//o-n time and space
void leaves(Node* root,vector<int>& ans){
        if(root==NULL) return;
        if(root->left==NULL&&root->right==NULL){
            ans.push_back(root->data);
            return;
        }
            
        leaves(root->left,ans);
        leaves(root->right,ans);
    }

    vector <int> printBoundary(Node *root)
    {
        //Your code here
        vector<int> ans;
        if(root==NULL) return ans;
        
        
        stack<int> st;
        
        ans.push_back(root->data);
        Node *left=root->left,*right=root->right;
        
        //o-n
        while(left){
            if(left->left==NULL&&left->right==NULL)
                break;
            ans.push_back(left->data);
            if(left->left)
            left=left->left;
            else
            left=left->right;
        }
        
        //o-n
        leaves(root,ans);
        
      //o-n
        while(right){
            if(right->left==NULL&&right->right==NULL)
                break;
            st.push(right->data);
            if(right->right)
            right=right->right;
            else
            right=right->left;
        }
        
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        
        return ans;
    }
