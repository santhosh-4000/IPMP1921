//https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1#

//O(nlogn)
void merge(long long arr[], int l, int m, int h,
    long long int& ans){
        
        int n1=m-l+1, n2=h-m;
        long long arr1[n1],arr2[n2];
        int i=0,j=0,k=l;
        
        for(i=0;i<n1;i++)
        arr1[i]=arr[l+i];
        for(j=0;j<n2;j++)
        arr2[j]=arr[m+1+j];
        
        i=0;j=0;
        while(i<n1&&j<n2){
            if(arr1[i]<=arr2[j])
                i++;
            else{
                j++;
                ans+=(n-i);
            }
        }
        
        i=0;j=0;
        while(i<n1&&j<n2){
            if(arr1[i]<=arr2[j]){
                arr[k++]=arr1[i++];
            }
            else
            arr[k++]=arr2[j++];
        }
        
        while(i<n1){
            arr[k++]=arr1[i++];
        }
        
        while(j<n2){
             arr[k++]=arr2[j++];
        }
    }

void mergeCount(long long arr[], int l, int h,long long int& ans){
    if(l<=h){
        int m=(l+h)/2;
        mergeCount(arr,l,m,ans);//tn/2
        mergeCount(arr,m+1,h,ans);
        merge(arr,l,m,h,ans);
    }
}

long long int inversionCount(long long arr[], long long N)
{
    // Your Code Here
    long long int ans=0;
    
    mergeCount(arr,0,N-1,ans);
    
    return ans;
}
