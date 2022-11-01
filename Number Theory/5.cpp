#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll GCD(ll x, ll y){
    if(x==0 or y==0) return x+y;

    if(x>y){
        x%=y;
    }else{
        y%=x;
    }
    return GCD(x, y);
}

int main(){
    long long n; cin>>n;

    long long cnt = n;

    for(long long i=1; i<=n; i++){
        for(long long j=i+1; j<=n; j++){
            if(j%i==0 and GCD(i,j)==i){
                cnt++;
            }
                
        }
    }

    cout<<cnt;
}