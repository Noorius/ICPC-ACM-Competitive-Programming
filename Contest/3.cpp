#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin>>n;
    int a[100];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a, a+n);
    vector<int> dp(100);

    dp[1] = a[1] - a[0];
    dp[2] = a[2] - a[0];

    for(int i=3; i<n; i++){
        dp[i] = a[i] - a[i-1] + min(dp[i-1],dp[i-2]);
    }
    
    /*for(int i=0; i<n; i++){
        cout<<dp[i]<<" ";
    }*/
    cout<<dp[n-1]<<"\n";
    
    return 0;
}