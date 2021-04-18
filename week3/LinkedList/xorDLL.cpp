//https://practice.geeksforgeeks.org/problems/xor-linked-list/1

struct Node* insert(struct Node *head, int data)
{
	// Code here
	
	Node *newNode=new Node(data);
	newNode->npx=XOR(NULL,head);
	if(head!=NULL)
	head->npx=XOR(newNode, head->npx);
	
	return newNode;
}

vector<int> printList (struct Node *head)
{
	// Code here
	vector<int> ans;
	
	Node *prev=NULL,*next,*cur=head;
    
    while(cur){
        ans.push_back(cur->data);
        next=XOR(prev, cur->npx);
        prev=cur;
        cur=next;
    }
    
    return ans;	
}
