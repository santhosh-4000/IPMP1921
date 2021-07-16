//https://practice.geeksforgeeks.org/problems/stack-using-two-queues/1#

//pop costly O(n) time puish is O(1) time
/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */

//Function to push an element into stack using two queues.
void QueueStack :: push(int x)
{
        // Your Code
        if(q1.empty())
            q2.push(x);
        else
            q1.push(x);
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
        // Your Code 
        
        if(q1.empty()&&q2.empty())
            return -1;
        
        if(q1.empty()){
            while(q2.size()!=1){
            int tmp=q2.front();
            q1.push(tmp);
            q2.pop();
            }
            int tmp=q2.front();
            q2.pop();
            return tmp;
        }
        
        
        while(q1.size()!=1){
            int tmp=q1.front();
            q2.push(tmp);
            q1.pop();
            }
            int tmp=q1.front();
            q1.pop();
        return tmp;
}

//pop constant time possible
