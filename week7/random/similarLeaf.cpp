//https://leetcode.com/problems/leaf-similar-trees/submissions/
//O(m+n) time and O(1) space
 void DFS(TreeNode* root, vector<int>& seq){
        if(root==NULL) return;
        if(root->left!=NULL) DFS(root->left,seq);
        if(root->right!=NULL) DFS(root->right,seq);
        if(root->left==NULL&&root->right==NULL)
            seq.push_back(root->val);
        return;
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> seq1,seq2;
        DFS(root1,seq1);
        DFS(root2,seq2);
            
        if(seq1==seq2)
            return true;
        
        return false;
    }
