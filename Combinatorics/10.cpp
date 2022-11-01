#include <bits/stdc++.h>

using namespace std;


int main(){
    int k; cin>>k;

    vector<vector<int> > dp(k+1, vector<int>(k+1,0));

    dp[0][0] = 1;
    for(int i=1; i<=k; i++){
        for(int j=0; j<=k; j++){
            if(i>j){
                dp[i][j] = dp[i-1][j];
            }else{
                dp[i][j] = dp[i-1][j] + dp[i][j-i];
            }
        }
    }

    for(int i=0; i<=k; i++){
        for(int j=0; j<=k; j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    
    return 0;
}