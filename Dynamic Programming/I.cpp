#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("knapsack.in", "r", stdin);
    freopen("knapsack.out", "w", stdout);/**/
    int s, n; cin>>s>>n; 
    vector<int> w(n+1);
    for(int i=1; i<=n; i++){
        cin>>w[i];
    }

    vector<vector<int> > dp(n+1, vector<int>(s+1, 0));
    dp[0][0] = 1;

    for(int i=1; i<=n; i++){
        for(int j=0; j<=s; j++){
            if(w[i] <= j){
                dp[i][j] = dp[i-1][j] || dp[i-1][j-w[i]];
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    for(int i=s; i>=0; i--){
        if(dp[n][i]==1){
            cout<<i<<endl;
            return 0;
        }
    }

    /*for(int i=0; i<=n; i++){
        for(int j=0; j<=s; j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }*/
    return 0;
}