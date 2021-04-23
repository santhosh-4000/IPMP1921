//
//O(n2) time -brute force
//check for all pairs (i,j) i<j

----------------------------------------
//O(nlogn) time and O(n) space
//modified mergeSort

int merge(vector<int> &A, int l, int h, int m){
    
    int n1=m-l,n2=h-m+1,count=0;
    /*cout<<n1<<" "<<n2<<endl;*/
    int tmp1[n1],tmp2[n2];
    
    for(int i=0;i<n1;i++){
        tmp1[i]=A[l+i];
    }
    
    for(int i=0;i<n2;i++){
        tmp2[i]=A[m+i];
    }
    
    /*for(int x=l;x<=h;x++)
        cout<<A[x]<<" ";
    
        cout<<endl;*/
    
    int i=0,j=0,k=l;
    
    while(i<n1&&j<n2){
        if(tmp1[i]<=tmp2[j]){
            A[k++]=tmp1[i++];
        }
        else{
            A[k++]=tmp2[j++];
            count+=(m-i-l);
        }
    }
    
    while(i<n1){
        A[k++]=tmp1[i++];
    }
    
    while(j<n2){
        A[k++]=tmp2[j++];
    }
    
    
    
    //cout<<count<<endl<<endl;
    return count;
}

int mergeSort(vector<int> &A, int l, int h){
    int count=0,m;
    if(l<h){
        m=(l+h)/2;
        count=mergeSort(A,l,m);
        count+=mergeSort(A,m+1,h);
        count+=merge(A, l, h, m+1);
        return count;
    }
    
    return count;
}

int Solution::countInversions(vector<int> &A) {
    
    return mergeSort(A, 0, A.size()-1);
    
}
