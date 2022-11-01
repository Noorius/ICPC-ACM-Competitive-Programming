#include <bits/stdc++.h>

using namespace std;

int dp[5001];

int plusi(int n){
    int mini = INT_MAX;
    for(int i = 1; i <= n/2; i++){
        int per = i + (n-i);
        if(per == n)
            mini = min(mini,dp[i]+dp[n-i]);
    }
    return mini;
}

int mult(int n){
    int mini = INT_MAX;
    for(int i = 2; i <= sqrt(n); i++){
        //int per = dp[i]*dp[n/i];
        int per = i*(n/i);
        if(per == n)
            mini = min(mini,dp[i]+dp[n/i]);
    }
    return mini;
}

int main(){
    int n; cin>>n;
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;

    for(int i=3; i<=n; i++){
        dp[i] = min(plusi(i),mult(i));
        //cout<<i<<" "<<plusi(i)<<" "<<mult(i)<<endl;
    }

    /*for(int i=1; i<=n; i++){
        cout<<dp[i]<<" ";
    }*/

    cout<<dp[n];
    
    return 0;
}