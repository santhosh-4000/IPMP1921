//https://leetcode.com/problems/average-of-levels-in-binary-tree/submissions/
//O(n) time and space
vector<double> averageOfLevels(TreeNode* root) {
        
        queue<TreeNode*> q;
        q.push(root);
        vector<double> ans;
        
        while(!q.empty()){
            double n=q.size();
            double sum=0.0;
            for(int i=0;i<n;i++){
                TreeNode* tmp = q.front();
                q.pop();
                sum+=tmp->val;
                
                if(tmp->left) q.push(tmp->left);
                if(tmp->right) q.push(tmp->right);
            }
            ans.push_back(sum/n);
        }
        
        return ans;
    }
