//https://leetcode.com/problems/k-closest-points-to-origin/submissions/
//t-O(nlogn)

static long long distance2(vector<int> a){
        return (a[0])*(a[0])+(a[1])*(a[1]);
    }
    
    static bool compare(vector<int> a, vector<int> b){
        return distance2(a)<distance2(b);
    }
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        sort(points.begin(), points.end(), compare);
        
        vector<vector<int>> res;
        for(int i=0;i<k;i++){
            res.push_back(points[i]);
        }
        
        return res;
   }

//O(nlogk)
static long long distance2(vector<int>& a){
        return (a[0])*(a[0])+(a[1])*(a[1]);
    }
    
    struct compare {
    bool operator() (vector<int> &a, vector<int> &b) {
        //cout << "a: " << a << " vs b: " << b << endl;
        return (distance2(a) < distance2(b));
    }
};
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        priority_queue<vector<int>, vector<vector<int>>, compare> pq;
        
        for(int i=0;i<k;i++){
            pq.push(points[i]);
        }
        
        for(int i=k;i<points.size();i++){
            //cout<<pq.top()[0]<<" "<<pq.top()[1]<<endl;
            
            pq.push(points[i]);
            pq.pop();
        }
        
        vector<vector<int>> res(k);
        
        for(int i=0;i<k;i++){
            res[i]=pq.top();
            pq.pop();
        }
        
        return res;
        
    }
