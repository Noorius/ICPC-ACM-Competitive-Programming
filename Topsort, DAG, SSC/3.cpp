#include <bits/stdc++.h>

using namespace std;
int n, m;
vector<vector<int> > g(10e5+1);
vector<int> was(10e5+1); 

vector<int> ts;

void dfs(int v){
    was[v] = 1;
    for(int u : g[v]){
        if(was[u]==0){
            dfs(u);
        }
    }
    ts.push_back(v+1);
}

int main(){
    cin>>n>>m;

    for(int i=0; i<m; i++){
        int st, en; cin>>st>>en; st--; en--;
        g[st].push_back(en);
        g[en].push_back(st);
    }

    dfs(0);

    for(int i = 0; i<n; i++){
        if(!was[i]){
            cout<<"NO";
            exit(0);
        }
    }
    cout<<"YES";
    return 0;
}