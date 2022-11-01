#include <bits/stdc++.h>

using namespace std;
int n, m;
vector<vector<int> > g(101, vector<int>(101,0));
vector<int> was(101); 


void dfs(int v){
    was[v] = 1;
    for(int i = v+1; i<n; i++){
        if(g[v][i]){
            if(!was[i]){
                dfs(i);
            }else if(was[i]){
                g[v][i] = 0;
                g[i][v] = 0;
            }
        }
    }
    was[v] = 2;
}

int main(){
    cin>>n>>m;

    for(int i=0; i<m; i++){
        int st, en; cin>>st>>en; st--; en--;
        g[st][en] = 1;
        g[en][st] = 1;
    }

    /*for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<g[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";*/

    dfs(0);

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(g[i][j]==1){
                cout<<i+1<<" "<<j+1<<"\n";
            }
            /*cout<<g[i][j]<<" ";*/
        }
        //cout<<"\n";
    }
    
    return 0;
}