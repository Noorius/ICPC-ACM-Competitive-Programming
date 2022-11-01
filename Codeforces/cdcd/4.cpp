#include <bits/stdc++.h>

using namespace std;

int q;

void solution(){
    int n; cin>>n;

    int a[n];
    vector<vector<int> > g(n+1);
    int root;

    for(int i=1; i<=n; i++){
        int t; cin>>t;
        if(t!=i)
            g[t].push_back(i);
        else
            root = i;
    }



    return; 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);/**/

    cin>>q;

    while(q--){
        solution();
    }
    

    return 0;
}