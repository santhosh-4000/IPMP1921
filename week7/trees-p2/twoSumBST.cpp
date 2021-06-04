//https://leetcode.com/problems/two-sum-iv-input-is-a-bst/submissions/

//using hashing
//o-n time and space
 bool findTargetUtil(TreeNode* root, int k, unordered_set<int> &st){
        if(root==NULL)
            return false;
        if(st.find(k-(root->val))!=st.end())
            return true;
        
        st.insert(root->val);
        
        if(findTargetUtil(root->left,k,st))
            return true;
        return findTargetUtil(root->right,k,st);
    }
    
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int> st;
        return findTargetUtil(root,k,st);
    }

//or we can do inorder traversal push in vector and find 2sum
