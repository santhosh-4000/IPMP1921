//
//O(nlogn) time and space

#include <bits/stdc++.h>
using namespace std;

class Point
{
    public:
    int x, y;
};

float distance(Point p1,Point p2){
    return (float)(sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y)));
}

bool compareX(Point p1,Point p2){
    return p1.x<=p2.x;
}

bool compareY(Point p1,Point p2){
    return p1.y<=p2.y;
}

float bruteForce(Point p[],int i, int j){
    float mini=FLT_MAX;
    for(int k1=i;k1<=j;k1++){
        for(int k2=k1+1;k2<=j;k2++){
            mini=min(mini,distance(p[k1],p[k2]));
        }
    }
    
    return mini;
}

float closestUtil(Point px[],Point py[],int n){
    
    if(n<=2) return bruteForce(px,0,n-1);
    
    
    int mid=n/2;
    Point mid_pt=px[mid];
    
    Point pyl[mid],pyr[n-mid];//s-O(n)
    
    int j1=0,j2=0;
    //t-o(n)
    for(int i=0;i<n;i++){
        if(py[i].x<=mid_pt.x)
            pyl[j1++]=py[i];
        else
            pyr[j2++]=py[i];
    }
    
    float dl=closestUtil(px+mid,pyl,mid+1);//t(n/2)
    float dr=closestUtil(px+mid,pyr,n-mid-1);//t(n/2)
    float d=min(dl,dr);
    
    vector<Point> strip;
    
  //o(n)
    for(int k=0;k<n;k++){
        if(abs(py[k].x-mid_pt.x)<d)
            strip.push_back(py[k]);
    }
    
    //sort(strip.begin(),strip.end(),compareY);
    
    float mini=INT_MAX;
    //o(n)
    for(int k=0;k<strip.size();k++){
        for(int c=1;c<=7&&k+c<strip.size();c++){
            float dist=distance(strip[k], strip[k+c]);
            if(dist<mini){
            mini=dist;
            cout<<strip[k].x<<","<<strip[k].y<<" "<<strip[k+c].x<<","<<strip[k+c].y<<endl;
            cout<<mini<<endl;;
            }
        }
    }
    
    return min(d,mini);
}

float closest(Point p[],int n){
    Point px[n],py[n];//s-o(n)
    for(int i=0;i<n;i++){
        px[i]=p[i];
        py[i]=p[i];
    }
    
    sort(px,px+n,compareX);//nlogn
    sort(py,py+n,compareY);
    
    closestUtil(px,py,n);
    
}

int main()
{
    Point P[] = {{2, 3}, {12, 30}, {40, 50}, {5, 1},{4,0}, {12, 10},{10,20},{10,10}};//how
    
    int n = sizeof(P) / sizeof(P[0]);
    cout << "The smallest distance is " << closest(P, n);
    return 0;
}

