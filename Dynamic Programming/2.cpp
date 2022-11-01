#include <bits/stdc++.h>

using namespace std;

int cost(char s){
    if(s=='.'){
        return 0;
    }else if(s=='w'){
        return -INT_MAX;
    }else if(s=='"'){
        return 1;
    }
}

int main()
{
    /*freopen("lepus.in", "r", stdin);
    freopen("lepus.out", "w", stdout);*/

    int n;
    string s;
    cin >> n >> s;

    vector<int> dp(n+1,-1);

    dp[0] = 0;
    
    for(int i = 0; i < n; i++){
        if(s[i] == 'w') continue;
        if(dp[i]!=-1){
            if(i+1<n) dp[i+1] = max(cost(s[i+1]) + dp[i], dp[i+1]);
            if(i+3<n) dp[i+3] = max(cost(s[i+3]) + dp[i], dp[i+3]);
            if(i+5<n) dp[i+5] = max(cost(s[i+5]) + dp[i], dp[i+5]);
        }
    }

    /*for(int i = 0; i < n; i++){
        cout<<dp[i]<<" ";
    }*/
    
    if(dp[n-1]<0) cout<<-1;
    else cout<<dp[n-1];/**/

    return 0;
}