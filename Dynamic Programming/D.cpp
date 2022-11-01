#include <bits/stdc++.h>

using namespace std;

int main(){
    /*freopen("knight.in", "r", stdin);
    freopen("knight.out", "w", stdout);*/

    vector<vector<int> > dp(9, vector<int>(9,INT_MAX)); //1001
    vector<vector<int> > a(9, vector<int>(9,0));

    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            cin>>a[i][j];
        }
    }

    dp[7][0] = 0;

    for(int i=7; i>=0; i--){
        for(int j=0; j<8; j++){
            if(i-1>=0){
                dp[i-1][j] = min(a[i-1][j]+dp[i][j],dp[i-1][j]);
            }
            if(j+1<8){
                dp[i][j+1] = min(a[i][j+1]+dp[i][j],dp[i][j+1]);
            }
            if(i-1>=0 && j+1<8){
                dp[i-1][j+1] = min(a[i-1][j+1]+dp[i][j],dp[i-1][j+1]);
            }
        }
    }

    /*for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }*/

    cout<<dp[0][7];//

    return 0;
}