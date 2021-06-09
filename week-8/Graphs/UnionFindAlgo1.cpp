//https://www.geeksforgeeks.org/union-find/

//uion o-1 here but naive o-n as we have to use find
//find o-V
//algo:O(v2) since outer loop may run atmost v-1 times
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

int find(vector<int>& parent,int u){
    while(parent[u]!=-1){
        u=parent[u];
    }
    return u;
}

void Union(vector<int>& parent,int u,int v){
    //for naive union uncomment below
    /*
    u=find(parent,u);
    v=find(parent,v);
    */
    parent[u]=v;
}

bool findCycle(Graph* g){
    
    vector<int> parent(g->V,-1);
    
    for(int i=0;i<g->E;i++){
         int u=g->edge[i].src;
         int v=g->edge[i].dest;
         cout<<u<<" "<<v<<endl;
         u=find(parent,u);
         v=find(parent,v);
         
         if(u==v) {
             cout<<u<<" "<<v;             
             return 1;
         }
         Union(parent,u,v);
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
    graph->edge[1].dest = 3;
 
    // add edge 0-2
    graph->edge[2].src = 0;
    graph->edge[2].dest = 2;
 
    if (findCycle(graph))
        cout << "graph contains cycle";
    else
        cout << "graph doesn't contain cycle";
 
    return 0;
}
