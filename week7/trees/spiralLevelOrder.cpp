//https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/submissions/

//o-n time and o-w space if ans vector not considered
vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        vector<int> level;
        
        stack<TreeNode*> st1,st2;
        st1.push(root);
        
        while(!st1.empty()||!st2.empty()){
            level.resize(0);
            
            while(!st1.empty()){
                TreeNode* tmp=st1.top();
                level.push_back(tmp->val);
                st1.pop();
                
                if(tmp->left)
                    st2.push(tmp->left);
                if(tmp->right)
                    st2.push(tmp->right);
            }
            
            if(level.size()!=0)
            ans.push_back(level);
            level.resize(0);
            
            while(!st2.empty()){
                TreeNode* tmp=st2.top();
                level.push_back(tmp->val);
                st2.pop();
                
                if(tmp->right)
                    st1.push(tmp->right);
                if(tmp->left)
                    st1.push(tmp->left);
                
            }
            
            if(level.size()!=0)
            ans.push_back(level);
        }
        
        return ans;
    }

