//https://practice.geeksforgeeks.org/problems/transform-to-sum-tree/1

//o-n time
void toSumTreeUtil(Node *node, int& sum){
        
        if(node==NULL){
            sum=0;
            return;
        }
        
        int s1,s2;
        toSumTreeUtil(node->left,s1);
        toSumTreeUtil(node->right,s2);
        
        int tmp=node->data;
        node->data=s1+s2;
        
        sum=node->data+tmp;
        
        return;
    }
    
    void toSumTree(Node *node)
    {
        // Your code here
        int sum=0;
       toSumTreeUtil(node,sum);
    }
