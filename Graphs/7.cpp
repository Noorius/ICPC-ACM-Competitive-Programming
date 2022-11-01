#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n; cin>>n;
    int dp[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>dp[i][j];
        }
    }
    

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(dp[i][j]==1){
                cout<<i+1<<" "<<j+1<<"\n";
            }
        }
    }

    
    return 0;
}