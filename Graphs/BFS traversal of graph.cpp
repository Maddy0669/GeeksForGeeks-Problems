vector <int> bfs(vector<int> g[], int N) {
    map<int,int> visited ;
    queue<int> q;
    int temp=0;
    q.push(temp);
    visited[temp]=true;
    vector<int> ans;
    
    while(!q.empty()){
        int node=q.front();
        q.pop();
        ans.push_back(node);
        
        for(auto nbr:g[node]){
            if(!visited[nbr]){
                q.push(nbr);
                visited[nbr]=true;
                
            }
        }
    }
    return ans;
}