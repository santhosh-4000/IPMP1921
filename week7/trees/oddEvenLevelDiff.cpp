//https://practice.geeksforgeeks.org/problems/odd-even-level-difference/1

//o-n time and o-w space
int getLevelDiff(Node *root)
    {
       //Your code here
       if(root==NULL) return 0;
       
       bool flag=false;
       queue<Node*> q;
       q.push(root);
       int sum1=0,sum2=0;
       
       while(!q.empty()){
           int n=q.size();
           while(n--){
               Node* tmp=q.front();
               q.pop();
               
               if(flag)sum2+=tmp->data;
               else sum1+=tmp->data;
               
               if(tmp->left) q.push(tmp->left);
               if(tmp->right) q.push(tmp->right);
           }
           flag=!flag;
       }
       
       return sum1-sum2;
    }

//recursive o-n time and o-h space
int getLevelDiff(Node *root)
    {
       //Your code here
       if(root==NULL) return 0;
       return root->data-getLevelDiff(root->left)-
            getLevelDiff(root->right);
    }
