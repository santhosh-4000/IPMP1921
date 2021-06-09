//https://www.geeksforgeeks.org/union-find-algorithm-set-2-union-by-rank/

//using union by rank and path compression
//in worst case while forming binomial heaps
//union:o-1 here but O-logv in general find:- o-logV(max depth)
#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int src, dest;
};

class Graph
{
public:
int V, E;
 Edge* edge;
 
 Graph(int V, int E){
     this->E=E;
     this->V=V;
     
     this->edge=new Edge[E];
 }
 
};

class disjointSet{
    public:
    int parent;
    int rank;
};

//
int find(vector<disjointSet>& st,int u){
    int k=u;
    while(st[u].parent!=u){
        u=st[u].parent;
    }
    st[k].parent=u;
    return u;
}

void Union(vector<disjointSet>& st,int u,int v){
    if(st[u].rank>st[v].rank)
        st[v].parent=u;
    else if(st[u].rank<st[v].rank)
        st[u].parent=v;
    else{
        st[u].parent=v;
        st[u].rank++;
    }
}

bool findCycle(Graph* g){
    
    vector<disjointSet> st(g->V);
    int c=0;
    for(auto &it: st){
        it.parent=c++;
        it.rank=0;
    }
    
    for(int i=0;i<g->E;i++){
         int u=g->edge[i].src;
         int v=g->edge[i].dest;
         cout<<u<<" "<<v<<endl;
         u=find(st,u);
         v=find(st,v);
         
         if(u==v) {
             cout<<u<<" "<<v;             
             return 1;
         }
         Union(st,u,v);
    }
    
    return 0;
}

int main()
{
    
    int V = 4, E = 3;
    Graph* graph = new Graph(V, E);
 
    // add edge 0-1
    graph->edge[0].src = 0;
    graph->edge[0].dest = 1;
 
    // add edge 1-4
    graph->edge[1].src = 1;
    graph->edge[1].dest = 2;
 
    // add edge 0-2
    graph->edge[2].src = 0;
    graph->edge[2].dest = 2;
 
    if (findCycle(graph))
        cout << "graph contains cycle";
    else
        cout << "graph doesn't contain cycle";
 
    return 0;
}
