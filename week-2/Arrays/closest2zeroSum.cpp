//https://practice.geeksforgeeks.org/problems/two-numbers-with-sum-closest-to-zero1737/1#
  int closestToZero(int arr[], int n)
        {
            // your code here 
            
            int mini=INT_MAX,maxi=0;
            
            sort(arr,arr+n);
            
            int i=0,j=n-1;
            
            while(i<j){
                int sum=arr[i]+arr[j];
                if(sum==0) return 0;
                else if(sum>0)
                j--;
                else i++;
                
                if(abs(sum)<abs(mini)){
                    mini=sum;
                    maxi=sum;
                }
                else if(abs(sum)==abs(mini)){
                    maxi=max(maxi,sum);
                }
            }
            
            return maxi;
        }
