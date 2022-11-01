#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > g(101,vector<int>(101, 0));


int main(){
    freopen("floyd.in", "r", stdin);
    freopen("floyd.out", "w", stdout);

    int n; cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>g[i][j];
        }
    }

    for(int k=0;k<n;k++){
        for(int j=0;j<n;j++){
            for(int i=0;i<n;i++){
                g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<g[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}