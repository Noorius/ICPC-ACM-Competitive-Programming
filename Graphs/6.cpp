#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n; cin>>n;
    int dp[n][n];
    int sum = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>dp[i][j];
        }
    }
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(dp[i][j]==1 and a[i]!=a[j]){
                sum++;
            }
        }
    }

    cout<<sum;
    
    return 0;
}