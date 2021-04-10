//https://leetcode.com/problems/sum-root-to-leaf-numbers/submissions/
void sumNumbersUtil(TreeNode* root,int cur, int& sum){
        if(root==NULL){
            return ;
        }
        
        cur=cur*10+root->val;
        
        if(root->left)
        sumNumbersUtil(root->left,cur,sum);
        if(root->right)
        sumNumbersUtil(root->right,cur,sum);
        
        if(!root->left && !root->right)
            sum+=cur;
        
    }
    
    int sumNumbers(TreeNode* root) {
        int cur=0, sum=0;
        sumNumbersUtil(root, cur, sum);
        
        return sum;
    }
