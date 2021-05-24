
//t=o(n(logn)2),s=o(n)

#include <bits/stdc++.h>
using namespace std;

class Point
{
    public:
    int x, y;
};

//O(1)
float distance(Point p1,Point p2){
    return (float)(sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y)));
}

bool compareX(Point p1,Point p2){
    return p1.x<=p2.x;
}

bool compareY(Point p1,Point p2){
    return p1.y<=p2.y;
}

//t(n)=2*t(n/2)+o(nlogn)
//using masters theorem, t=o(n(logn)2)
float closestUtil(Point p[],int i, int j){
    if(j-i<=1) return INT_MAX;
    
    if(j-i==2) return distance(p[i],p[i+1]);
    
    int mid=(i+j)/2;
    Point mid_pt=p[mid];
    
    float dl=closestUtil(p,i,mid);//t(n/2)
    float dr=closestUtil(p,mid+1,j);//t(n/2)
    float d=min(dl,dr);
    
    vector<Point> strip;
    
  //O(n)
    for(int k=i;k<j;k++){
        if(abs(p[k].x-mid_pt.x)<d)
            strip.push_back(p[k]);
    }
    
    sort(strip.begin(),strip.end(),compareY);//O(nlogn)
    
    float mini=INT_MAX;
  //O(n)
    for(int k=0;k<strip.size();k++){
        for(int c=1;c<=7&&k+c<strip.size();c++){
            int dist=distance(strip[k], strip[k+c]);
            if(dist<mini)
            mini=dist;
        }
    }
    
    return min(d,mini);
}

float closest(Point p[],int n){
    sort(p,p+n,compareX);//O(nlogn)
    
    return closestUtil(p,0,n-1);//O(n(logn)2)
}

int main()
{
    Point P[] = {{2, 3}, {12, 30}, {40, 50}, {5, 1}, {12, 10}, {3, 4}};//how
    
    int n = sizeof(P) / sizeof(P[0]);
    cout << "The smallest distance is " << closest(P, n);
    return 0;
}

