#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    int a[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    
    int dp[n][m];
    dp[0][0] = a[0][0];
    for(int i=1; i<m; i++){dp[0][i] = a[0][i] + dp[0][i-1];}
    for(int i=1; i<n; i++){dp[i][0] = a[i][0] + dp[i-1][0];}

    for(int i=1; i<n; i++){
        for(int j=1; j<m; j++){
            dp[i][j] = a[i][j] + dp[i][j-1] + (dp[i-1][j] - dp[i-1][j-1]);
        }
    }
    int q; cin>>q;

    for(int i=0; i<q; i++){
        int lxi, lxy, rxi,rxy; cin>>lxi>>lxy>>rxi>>rxy;
        lxi--; lxy--; rxi--; rxy--;
        if(lxi==0 and lxy==0) cout<<dp[rxi][rxy]<<"\n";
        else if(lxi==0) cout<<dp[rxi][rxy] - dp[rxi][lxy-1]<<"\n";
        else if(lxy==0) cout<<dp[rxi][rxy] - dp[lxi-1][rxy]<<"\n";
        else cout<<dp[rxi][rxy] - dp[rxi][lxy-1] - (dp[lxi-1][rxy] - dp[lxi-1][lxy-1])<<"\n";
        //cout<<dp[rxi][lxy-1]<<" "<<dp[lxi-1][rxy]<<" "<<dp[lxi-1][lxy-1]<<"\n";
    }

    return 0;
}