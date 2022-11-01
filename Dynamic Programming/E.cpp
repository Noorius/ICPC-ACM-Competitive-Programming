#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin>>n;

    vector<vector<int> > vec(n+1,vector<int>());
    vector<vector<int> > dp(n+1,vector<int>(n,-100000));

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            int t; cin>>t;
            vec[i].push_back(t);
        }
    }
    
    dp[0][0] = vec[0][0];
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            if(i+1<n)
                dp[i+1][j] = max(dp[i+1][j], dp[i][j] + vec[i+1][j]);
            if(i+1<n && j+1<n)
                dp[i+1][j+1] = max(dp[i+1][j+1], dp[i][j] + vec[i+1][j+1]);
        }
    }

    /*for(int i=0; i<n; i++){
        for(int c : vec[i]){
            cout<<c<<" ";
        }
        cout<<"\n";
    }*/

    cout<<*max_element(dp[n-1].begin(),dp[n-1].end());
    return 0;
}