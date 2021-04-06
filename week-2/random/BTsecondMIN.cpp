//https://leetcode.com/problems/second-minimum-node-in-a-binary-tree/submissions/

class Solution {
public:
    int findSecondMinimumValue(TreeNode* root) {
        
        queue<TreeNode*> q;
        vector<int> arr;
        q.push(root);
        
        int min=root->val;
        
        while(!q.empty()){
            TreeNode* tmp=q.front();
            arr.push_back(tmp->val);
            q.pop();
            
            if(tmp->left){
                q.push(tmp->left);
                q.push(tmp->right);
            }
            
        }
        
        int ans=INT_MAX,flag=0;
        for(auto &i:arr){
            if(i>min&&i<=ans){
                ans=i;
                flag=1;
            }
        }
        
        return (flag)?ans:-1;
        
    }
