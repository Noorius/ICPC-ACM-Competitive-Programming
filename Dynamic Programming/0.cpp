#include <bits/stdc++.h>

using namespace std;

bool is_mask(int mask, int i){
    return (mask & (1 << i)) > 0;
}

int main(){
    /*freopen("maze.in", "r", stdin);
    freopen("maze.out", "w", stdout);*/

    int n; cin>>n;

    vector<vector<int> > a(14, vector<int>(14, 0));

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }

    int dp[n][(1<<n)];
    
    for(int i=0; i<n; i++){
        for(int j=0; j<(1<<n); j++){
            if(is_mask(j, i)){
                for(int k = 0; k < n; k++){
                    if(is_mask(j, k)){
                        if(k==i){
                            dp[i][j] = 0;  
                        }else{
                            dp[i][j] = a[i][j] + dp[k][j^(1<<i)];
                        }
                    }
                }
            }else{
                dp[i][j] = 0;
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<(1<<n); j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }

    
    
    return 0;
}