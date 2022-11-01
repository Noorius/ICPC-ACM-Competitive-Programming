#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin>>n;

    int dp[n+1];

    dp[0] = 1;
    dp[1] = 3;
    for(int i=2; i<=n; i++){
        dp[i] = dp[i-1] * 3 - dp[i-2];
    }

    /*for(int i=0; i<n; i++){
        cout<<dp[i]<<" ";
    }*/

    cout<<dp[n];
    return 0;
}