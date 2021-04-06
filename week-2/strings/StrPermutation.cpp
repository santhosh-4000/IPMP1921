//https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1#
void find_permutationUtil(string& s, int i, vector<string>& ans){
	        
	        if(i == s.length()){
	            ans.push_back(s);
	        }
	        
	        
	        for(int x=i;x<s.length();x++){
	            swap(s[i],s[x]);
	            
	            find_permutationUtil(s,i+1,ans);
	            
	            swap(s[i],s[x]);
	        }
	            
	        
	    }
	
	
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    
		    int i=0;
		    vector<string> ans;
		    cout<<S;
		   find_permutationUtil(S,i,ans);
		   
		   //sort(ans.begin(), ans.end());
		   
		   return ans; 
		}

//possible with STL next_permutation(S.begin(), S.end()); to find next lexicographically permutation in string

//Concept is swaping with every other
