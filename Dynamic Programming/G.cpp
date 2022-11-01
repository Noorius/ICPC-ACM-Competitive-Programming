#include <bits/stdc++.h>

using namespace std;

int calc(int v, vector<int>& dp, vector<vector<int> >& g){
    if(dp[v] != -1){
        return dp[v];
    }
    dp[v] = 0;
    for(int n : g[v]){
        dp[v] = max(dp[v],calc(n, dp, g));
    }
    return dp[v] + 1;
}

int main(){
    /*freopen("longpath.in", "r", stdin);
    freopen("longpath.out", "w", stdout);*/
    int n, m;
    cin>>n>>m;

    vector<int> dp(n+1, -1);
    vector<vector<int> > g(n+1, vector<int>());

    for(int i=0; i<m; i++){
        int to1, end1; cin>>to1>>end1; to1--; end1--;
        g[to1].push_back(end1);
    }

    for(int i=0; i<n; i++){
        if(dp[i]==-1)
            calc(i, dp, g);
    }
    

    /*for(int i=0; i<n; i++){
        for(int k : g[i]){
            cout<<k<<" ";
        }
        cout<<endl;
    }*/

    /*for(int i=0; i<n; i++){
        cout<<dp[i]<<" ";
    }*/

    cout<<*max_element(dp.begin(), dp.end());
    
    return 0;
}