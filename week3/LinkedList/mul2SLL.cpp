//https://practice.geeksforgeeks.org/problems/multiply-two-linked-lists/1#
//O(m+n)
long long  multiplyTwoLists (Node* l1, Node* l2)
{
  //Your code here
  
  long long a=0,b=0,M=1000000007;
  
  while(l1){
      a=(a*10%M+l1->data)%M;
      l1=l1->next;
  }
  
  while(l2){
      b=(b*10%M+l2->data)%M;
      l2=l2->next;
  }
  
  return a*b%M;
  
}
