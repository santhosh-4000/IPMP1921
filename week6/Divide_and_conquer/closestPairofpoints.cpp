
//t=o(n(logn)2),s=o(n)

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

float closestUtil(Point p[],int i, int j){
    
    if(j-i<=1) return bruteForce(p,i,j);
    
    
    int mid=(i+j)/2;
    Point mid_pt=p[mid];
    
    float dl=closestUtil(p,i,mid);
    float dr=closestUtil(p,mid+1,j);
    float d=min(dl,dr);
    
    vector<Point> strip;
    
    for(int k=i;k<=j;k++){
        if(abs(p[k].x-mid_pt.x)<d)
            strip.push_back(p[k]);
    }
    
    sort(strip.begin(),strip.end(),compareY);
    
    float mini=INT_MAX;
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
    sort(p,p+n,compareX);
    
    return closestUtil(p,0,n-1);
}

int main()
{
    Point P[] = {{2, 3}, {12, 30}, {40, 50}, {5, 1}, {12, 10}, {3, 4},{10,10}};//how
    
    int n = sizeof(P) / sizeof(P[0]);
    cout << "The smallest distance is " << closest(P, n);
    return 0;
}




