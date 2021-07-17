//https://practice.geeksforgeeks.org/problems/special-stack/1#

//O(1) time and space for all operations

int minEle;

void push(stack<int>& st, int a){
	// Your code goes here
	if(st.empty()){
	    minEle=a;
	    st.push(a);
	}
	
	else if( minEle<=a )
	    st.push(a);
	
	else{
	    st.push(2*a-minEle);
	    minEle=a;
	}
	
}

bool isFull(stack<int>& st,int n){
	// Your code goes here
	if(st.size()==n){
	    return 1;
	}
	return 0;
}

bool isEmpty(stack<int>& st){
	// Your code goes here
	return st.empty();
}

int pop(stack<int>& st){
	// Your code goes here
	
	if(st.empty()) return -1;
	
	if(st.top()>=minEle)
	    {
	        int tmp=st.top();
	        st.pop();
	        return tmp;
	    }
	    
    int tmp=minEle;	
	minEle=2*minEle-st.top();
	st.pop();
	return tmp;
}

int getMin(stack<int>& s){
	// Your code goes here
	return minEle;
}
