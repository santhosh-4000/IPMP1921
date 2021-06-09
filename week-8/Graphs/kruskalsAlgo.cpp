//

//using union find to detect cycle
//O(ElogE+ElogV) time O(V) space
#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int src, dest, weight;
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



bool comp(Edge a, Edge b){
    return a.weight<b.weight;
}

void KruskalMST(Graph* g){
    
    sort(g->edge,g->edge+g->E,comp);
    
    vector<disjointSet> st(g->V);
    int c=0;
    for(auto &it: st){
        it.parent=c++;
        it.rank=0;
    }
    
    int i=0,n=0;
    vector<vector<int>> ans;
    
    for(int j=0;j<g->E;j++){
        if(n==g->V-1)
        break;
        
        int u=g->edge[j].src;
        int v=g->edge[j].dest;
        int x=find(st,u);
        int y=find(st,v);
        if(x!=y){
            ans.push_back({u,v,g->edge[j].weight});
            n++;
            Union(st,x,y);
        }
        
    }
    
    int cost=0;
    for(auto &it: ans){
        cout<<it[0]<<" "<<it[1]<<" "<<it[2]<<endl;
        cost+=it[2];
    }
    
    cout<<cost<<endl;
    
}

int main()
{
    
    int V = 4; // Number of vertices in graph
    int E = 5; // Number of edges in graph
    Graph* graph =new Graph(V, E);
 
    // add edge 0-1
    graph->edge[0].src = 0;
    graph->edge[0].dest = 1;
    graph->edge[0].weight = 10;
 
    // add edge 0-2
    graph->edge[1].src = 0;
    graph->edge[1].dest = 2;
    graph->edge[1].weight = 6;
 
    // add edge 0-3
    graph->edge[2].src = 0;
    graph->edge[2].dest = 3;
    graph->edge[2].weight = 5;
 
    // add edge 1-3
    graph->edge[3].src = 1;
    graph->edge[3].dest = 3;
    graph->edge[3].weight = 15;
 
    // add edge 2-3
    graph->edge[4].src = 2;
    graph->edge[4].dest = 3;
    graph->edge[4].weight = 4;
 
   
    // Function call
    KruskalMST(graph);
 
    return 0;
}
