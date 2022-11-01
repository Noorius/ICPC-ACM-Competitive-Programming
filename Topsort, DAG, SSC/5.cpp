#include <bits/stdc++.h>

using namespace std;
int n, m;
vector<vector<int> > g(101, vector<int>(101,0));
vector<int> was(101); 


void dfs(int v){
    was[v] = 1;
    for(int i = 0; i<n; i++){
        if(g[v][i]){
            if(!was[i]){
                dfs(i);
            }else if(was[i]==1){
                cout<<1;
                exit(0);
            }
        }
    }
    was[v] = 2;
}

int main(){
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>g[i][j];
        }
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

    cout<<0;
    
    return 0;
}