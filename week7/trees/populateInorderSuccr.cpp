//https://practice.geeksforgeeks.org/problems/populate-inorder-successor-for-all-nodes/1#

//o-n time o-h space
void populateNextUtil(struct node* p,struct node** nxt){
    if(p==NULL) {
        return;
    }
    
    populateNextUtil(p->right,nxt);
    
    p->next=*nxt;
    *nxt=p;
    
    populateNextUtil(p->left,nxt);
}


void populateNext(struct node* p)
{

// Your code goes here
    struct node* nxt=NULL;
    populateNextUtil(p, &nxt);
}
