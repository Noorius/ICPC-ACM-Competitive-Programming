#include <bits/stdc++.h>

#define ll long long


using namespace std;


vector<int> phi(int N){
    vector<int> fi(N+1);

    for(int i=0; i<=N; i++){
        fi[i] = i;
    }

    for(int i=2; i<=N; i++){
        if(fi[i]==i){
            for(int j=i; j<=N; j+=i){
                fi[j] -= fi[j]/i;
            }
        }
    }
    fi[0] = 0;
    fi[1] = 0;
    return fi;
}

int main(){
    int N = 1000000001;

    vector<int> fi;

    fi = phi(N);

    vector<ll> summa(N, 0);
    summa[0] = 0;
    summa[1] = 1;
    for(int i=2; i<N; i++){
        summa[i] = summa[i-1] + fi[i];
    }

    ll n; 
    ll s; cin>>s;
    for(ll l = 0; l < s; l++){
        cin>>n;

        cout<<summa[n]*summa[n]<<"\n";
    }
}