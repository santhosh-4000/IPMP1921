//https://leetcode.com/problems/populating-next-right-pointers-in-each-node/

//using BFS and queue BUT NOT CONST SPACE
//o-n time but o-w space, space not constant
class Solution {
public:
    Node* connect(Node* root) {
        
        if(root==NULL) return NULL;
        
        queue<Node*> q;
        q.push(root);
        root->next=NULL;
        
        while(!q.empty()){
            
            int n=q.size();
            Node *nxt=NULL;
            
            while(n--){
                Node* tmp=q.front();
                q.pop();
                
                if(tmp->right){
                    q.push(tmp->right);
                    tmp->right->next=nxt;
                    nxt=tmp->right;
                }
                
                if(tmp->left){
                    q.push(tmp->left);
                    tmp->left->next=nxt;
                    nxt=tmp->left;
                }
                
            }
            
        }
        
        return root;
    }
  
  
  
  
  
  
  
  
  
  
  
  
