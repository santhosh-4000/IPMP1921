//https://practice.geeksforgeeks.org/problems/box-stacking/1#

//O(n20 time O(n) space
void fillRotations(int height[],int width[],int length[],int n,
                vector<vector<int>>& rotations) {
                    
        for(int i=0;i<3*n;i+=3){
            
            int x=height[i/3],y=width[i/3],
            z=length[i/3];
            
            rotations[i].push_back(x);
            
            if(y<z){
            rotations[i].push_back(y);
            rotations[i].push_back(z);
            }
            else{
            rotations[i].push_back(z);
            rotations[i].push_back(y); 
            }
            
            rotations[i+1].push_back(y);
            
            if(x<z){
            rotations[i+1].push_back(x);
            rotations[i+1].push_back(z);
            }
            else{
            rotations[i+1].push_back(z);
            rotations[i+1].push_back(x); 
            }
            
            rotations[i+2].push_back(z);
            
            if(y<x){
            rotations[i+2].push_back(y);
            rotations[i+2].push_back(x);
            }
            else{
            rotations[i+2].push_back(x);
            rotations[i+2].push_back(y); 
            }
            
        }
        
    }
    
    static bool compare(vector<int>& a, vector<int> b){
        return (a[1]*a[2])<(b[1]*b[2]);
    }
    
    int maxHeight(int height[],int width[],int length[],int n)
    {
        //Your code here
        vector<vector<int>> rotations(3*n);
        
        fillRotations(height,width,length,
                n, rotations);
        
        sort(rotations.begin(),rotations.end(),compare);
        
        vector<int> M(3*n,0);
        int ans=0;
        
        M[0]=rotations[0][0];
        
        for(int i=0;i<rotations.size();i++){
            for(int j=0;j<i;j++){
                if(rotations[j][1]<rotations[i][1]&&
                    rotations[j][2]<rotations[i][2]&&
                    M[j]+rotations[i][0]>M[i])
                    M[i]=M[j]+rotations[i][0];
            }
            M[i]=max(M[i], rotations[i][0]);
            ans=max(ans,M[i]);
        }
        
        return ans;
    }
