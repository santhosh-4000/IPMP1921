//https://leetcode.com/problems/clone-graph/submissions/

//O(V+E) time and space
void DFS(Node* node,Node** g,
             unordered_map<Node*,Node*>& mp){
        
        *g=new Node(node->val);
        mp[node]=*g;
        
        for(auto &it: node->neighbors){
            if(!mp[it]){
                Node* g1;
                DFS(it,&g1,mp);
                (*g)->neighbors.push_back(g1);
            }
            else
                (*g)->neighbors.push_back(mp[it]);
        }
        
    }
    
    Node* cloneGraph(Node* node) {
        if(node==NULL)
            return NULL;
        
        Node *g;
        
        unordered_map<Node* ,Node*> mp;
        
        DFS(node,&g,mp);
        
        return g;
    }
