//run lenth encoding and decoding

//https://practice.geeksforgeeks.org/problems/run-length-encoding/1#
char *encode(char *src)
{     
  //Your code here 
  
  char ans[2*strlen(src)];
  
  int i=1,len=1,j=0;
  
  while(src[i]){
      if(src[i] == src[i-1]){
          len++;i++;
      }
      else{
          ans[j++]=src[i-1];
          ans[j++]='0'+len;
          len=1;
          i++;
      }
  }
  ans[j++]=src[i-1];
  ans[j++]='0'+len;
  ans[j++]='\0';
  
  printf("%s",ans);
  return "";
}     
 


//https://leetcode.com/problems/decompress-run-length-encoded-list/submissions/

vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        
        for(int i=0;i<nums.size();i+=2){
            while(nums[i]--){
                ans.push_back(nums[i+1]);
            }
        }
        
        return ans;
    }
