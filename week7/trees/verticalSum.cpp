//https://practice.geeksforgeeks.org/problems/vertical-sum/1

//preorder traversal
//using hashmap
//o-(n+wlogw) o-w space
void verticalSumUtil(Node *root, map<int,int> &mp, int vno){
        if(root==NULL) return;
        mp[vno]+=root->data;
        verticalSumUtil(root->left,mp,vno-1);
        verticalSumUtil(root->right,mp,vno+1);
    }
  
    vector <int> verticalSum(Node *root) {
        // add code here.
        map<int,int> mp;
        verticalSumUtil(root, mp, 0);
        
        vector<int> ans;
        for(auto &it: mp){
            ans.push_back(it.second);
        }
        
        return ans;
    }

//https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/submissions/
//vertical order traversal

//space complexity same as above if ans vector not considered
//time complexity??
//preorder traversal
static bool comp(pair<int,int> a, 
                    pair<int,int> b){
        return (a.second==b.second)?(a.first<b.first):
        a.second<b.second;
    }
    
    void verticalTraversalUtil(TreeNode* root, 
                    map<int, vector<pair<int,int>>>& mp,
                              int col, int row){
        
        if(root==NULL) return;
        
        mp[col].push_back({root->val, row});
        
        verticalTraversalUtil(root->left,mp,col-1,row+1);
        verticalTraversalUtil(root->right,mp,col+1,row+1);
    }
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        map<int, vector<pair<int,int>>> mp;
        verticalTraversalUtil(root,mp,0,0);
        vector<vector<int>> ans;
        for(auto &im: mp){
            sort(im.second.begin(), im.second.end(), comp);
            
            vector<int> tmp;
            for(auto &it: im.second){
                tmp.push_back(it.first);
            }
            ans.push_back(tmp);
        }
        
        return ans;
    }
