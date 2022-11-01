#include <bits/stdc++.h>

using namespace std;
int n, m;
vector<vector<int> > g(101);
vector<int> was(101); 

void dfs(int v){
    if(v==0){
        was[v] = 1;
    }

    for(int u : g[v]){
        if(!was[u]){
            was[u] = (was[v]==1) + 1;
            dfs(u);
        }else if(was[u]==was[v]){
            cout<<"NO";
            exit(0);
        }
    }

}

int main(){
    cin>>n>>m;

    for(int i=0; i<m; i++){
        int st, en; cin>>st>>en; st--; en--;
        g[st].push_back(en);
        g[en].push_back(st);
    }

    /*for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<g[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";*/


    for(int i=0; i<n; i++){
        if(!was[i]){
            dfs(i); 
        }
    }

    cout<<"YES";
    
    return 0;
}