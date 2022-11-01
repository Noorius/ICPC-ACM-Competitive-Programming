#include <bits/stdc++.h> 

using namespace std; 
int n, m; 
vector<vector<int> > g(10e5+1); 
vector<bool> was(10e5+1); 

vector<int> ts;

void dfs(int v){
    was[v] = true;
    sort(g[v].begin(), g[v].end());
    
    for(int u : g[v]){
        if(!was[u]){
            dfs(u);
        }
    }
    ts.push_back(v+1);
}

int main(){
    cin>>n;

    for(int i=0; i<n; i++){
        int m; cin>>m;

        for(int j = 0; j<m; j++){
            int en; cin>>en; en--;
            g[i].push_back(en);
        }
    }

    for(int i=0; i<n; i++){
        if(!was[i]){
            dfs(i); 
        }
    }

    vector<int>::iterator it; 
    for(it=ts.begin();it!=ts.end(); it++){ 
        cout<<(*it)<<" "; 
    } 
    
    return 0;
} 
