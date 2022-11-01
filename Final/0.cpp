#include <bits/stdc++.h>

#define ll long long

using namespace std;



const int N = 2000001;

vector<ll> fi(N, 0), summa(N, 0), dp(N, 0);


void phi(){

    fi[0] = fi[1] = 0;

    for(int i=2; i<N; i++){
        if(!fi[i]){
            for(int j=i; j<N; j+=i){
                if(!fi[j]) fi[j] = j;
                fi[j] -= fi[j]/i;
            }
        }
    }

    /*summa[0] = 0;
    summa[1] = 1;
    for(int i=2; i<N; i++){
        summa[i] = summa[i-1] + fi[i];
    }*/
}

/*
ll t(int n){
    ll sum = 1;

    if(n<2) return 0;

    for(ll i=2; i*i<=n; i++){
        int cnt = 0;
        if(n%i==0){
            while(n%i==0) {
                n/=i;
                cnt++;
            }
            sum = sum * (pow(i, cnt) - pow(i, cnt-1));
        }
    }

    if(n>1){
        sum *= (n - 1);
    }

    return sum;
}
*/



int main(){
    phi();
    
    for(int i = 2; i <= 2000000; i++) {
        summa[i] = 1 + summa[fi[i]];
        dp[i] = dp[i-1] + summa[i];
    }

    ll q; cin>>q;
    while(q--){
        ll n, m; cin>>m>>n;
        //cout<<summa[n]*summa[n]<<"\n";

        int res = dp[n] - dp[m-1];

        cout<<res<<"\n";
    }
}