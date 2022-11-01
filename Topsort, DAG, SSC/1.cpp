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
        }else if(was[u]==1){
            cout<<-1;
            exit(0);
        }
    }
    ts.push_back(v+1);
    was[v] = 2;
}

int main(){
    cin>>n>>m;

    for(int i=0; i<m; i++){
        int st, en; cin>>st>>en; st--; en--;
        g[st].push_back(en);
    }

    for(int i=0; i<n; i++){
        if(was[i]==0){
            dfs(i);
        }
    }

    vector<int>::reverse_iterator it;
    for(it=ts.rbegin();it!=ts.rend(); it++){
        cout<<(*it)<<" ";
    }
    
    return 0;
}