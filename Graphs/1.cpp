#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n; cin>>n;
    int dp[n][n];
    int sum = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int t; cin>>t;
            if(t==1 and j>i){
                sum++;
            }
        }
    }

    cout<<sum;
    
    return 0;
}