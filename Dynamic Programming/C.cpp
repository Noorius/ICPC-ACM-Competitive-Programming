#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("knight.in", "r", stdin);
    freopen("knight.out", "w", stdout);/**/
    int n, m;
    cin>>n>>m;

    vector<vector<int> > dp(n, vector<int>(m,0));

    dp[0][0] = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i-1>=0 && j-2>=0){
                dp[i][j] += dp[i-1][j-2];
            }
            if(i-2>=0 && j-1>=0){
                dp[i][j] += dp[i-2][j-1];
            }
        }
    }

    /*for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }*/

    cout<<dp[n-1][m-1];

    return 0;
}