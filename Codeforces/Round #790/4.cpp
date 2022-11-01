#include <bits/stdc++.h>

using namespace std;

long long q;

int a[201][201], dp[201][201], dp1[201][201];

void solution(){
    int n, m;
    cin>>n>>m;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }

    dp1[0][0] = dp[0][0] = a[0][0];

    int m_d, l_d;
    m_d = l_d = INT_MIN;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == 0){
                dp1[i][j] = dp[i][j] = a[i][j];
            }else if(j == 0){
                dp[i][j] = a[i][j];
                dp1[i][j] += dp1[i-1][j+1] + a[i][j];  
            }else if(j == n-1){
                dp1[i][j] = a[i][j];
                dp[i][j] += dp[i-1][j-1] + a[i][j];
            }else{
                dp[i][j] += dp[i-1][j-1] + a[i][j];
                dp1[i][j] += dp1[i-1][j+1] + a[i][j];  
            }

            if(j==0 or i==n-1){
                if(l_d < dp1[i][j])
                    l_d = dp1[i][j];
            }

            if(j==n-1 or i==n-1){
                if(m_d < dp[i][j])
                    m_d = dp[i][j];
            }
            
        }
    }

    cout<<"\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<dp1[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<m_d<<" "<<l_d<<"\n";


    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin>>q;

    while(q--){
        solution();
    }

    return 0;
}