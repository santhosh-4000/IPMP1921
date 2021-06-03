//https://leetcode.com/problems/balanced-binary-tree/submissions/

//o-n t nd o-h stack
bool isBalancedUtil(TreeNode* root, int &height){
        if(root==NULL){
            height=0;
            return true;
        }
        int h1,h2;
        bool t1,t2;
        t1=isBalancedUtil(root->left,h1);
        t2=isBalancedUtil(root->right,h2);
        
        height=max(h1,h2)+1;
        
        if(t1&&t2) return abs(h1-h2)<=1;
        
        return 0;
    }
