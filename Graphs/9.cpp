#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, m; cin>>n>>m;
    int dp[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            dp[i][j] = 0;
        }
    }
    

    for(int i=0; i<m; i++){
        int st, en; cin>>st>>en; st--; en--;
        dp[st][en] = 1;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}