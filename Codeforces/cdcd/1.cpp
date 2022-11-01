#include <bits/stdc++.h>

using namespace std;

long long q;


void solution(){
    int k_s, k_k, k_u, s, k;
    cin>>k_s>>k_k>>k_u>>s>>k;

    int ost_k = (k_k - k);
    int ost_s = (k_s - s);

    /*if(k_s==0 and k_k==0 and k_u==0){
        cout<<"NO\n";
        return;
    }*/

    if(ost_k < 0)
        k_u += ost_k;
    if(ost_s <0)
        k_u += ost_s;

    if(k_u >= 0){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
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