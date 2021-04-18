//https://practice.geeksforgeeks.org/problems/merge-list-alternatingly/1#
//O(min(m,n)) time O(1) space
void mergeList(struct Node **p, struct Node **q)
{
     // Code here
     Node *cur1=*p,*cur2=*q,*tmp;
     
     while(cur1&&cur2){
         tmp=cur1->next;
         cur1->next=cur2;
         cur1=tmp;
         
         tmp=cur2->next;
         cur2->next=cur1;
         cur2=tmp;
     }
     
     *q=cur2;
     
}
