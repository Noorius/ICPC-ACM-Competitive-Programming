#include <bits/stdc++.h>

using namespace std;

long long q;


void solution(){
    int k_s, k_k, k_u, s, k;
    cin>>k_s>>k_k>>k_u>>s>>k;

    if((((k_k - k) + k_u) + (k_s - s)) > 0){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}

int main(){
    /*ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);*/

    cin>>q;

    while(q--){
        solution();
    }
    

    return 0;
}