/* bfs of a graph */

vector <int> bfs(vector<int> g[], int N) {
    bool *visited = new bool[N]; 
    for(int i = 0; i < N; i++) 
        visited[i] = false; 
    queue<int> q;
    vector<int>::iterator i; 
    visited[0]=true;
    vector<int> res;
    //res.push_back(0);
    q.push(0);
    while(!q.empty()){
        int s = q.front(); 
        res.push_back(s);
        q.pop();
        for (i = g[s].begin(); i != g[s].end(); ++i) 
        { 
            if (!visited[*i]) 
            { 
                visited[*i] = true; 
                q.push(*i); 
            } 
        } 
    }
    return res;
    // Your code here
}
