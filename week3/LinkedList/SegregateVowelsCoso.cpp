//https://practice.geeksforgeeks.org/problems/arrange-consonants-and-vowels/1#
bool isVowel(char c){
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}

struct Node* arrange(Node *head)
{
   //Code here
   Node *vowSt=new Node('a'),*conSt= new Node('b');
   Node *cur1=vowSt,*cur2=conSt,*cur=head;
   
   while(cur){
       if(isVowel(cur->data)){
           cur1->next=cur;
           cur1=cur1->next;
       }
       else{
           cur2->next=cur;
           cur2=cur2->next;
       }
       cur=cur->next;
   }
   
   vowSt=vowSt->next;
   conSt=conSt->next;
   
   if(vowSt==NULL||conSt==NULL){
       return head;
   }
   
   cur1->next=conSt;
   cur2->next=NULL;
   
   return vowSt;
}
