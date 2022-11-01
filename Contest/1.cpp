#include <bits/stdc++.h>

//#define N 2*10e2
#define ll long long
using namespace std;


int main(){
    ll n; cin>>n; 
    //build(1,0,R_n-1);
    vector<pair<ll,ll> > vec;
    for(int i=0; i<n; i++){
        ll l, r; cin>>l>>r;
        vec.push_back(make_pair(l,r));
    }
    vec.push_back(make_pair(10e9+1, 10e9+2));
    ll sum = 0;
    sort(vec.begin(),vec.end());
    ll L, R; //L = R = -INT_MAX;

    L = vec[0].first;
    R = vec[0].second;

    for(int i=1; i<=n; i++){
        if(vec[i].first <= R){
            R = max(R, vec[i].second);
        }else{
            sum += R-L;
            L = vec[i].first;
            R = vec[i].second;
        }
        //cout<<L<<" - "<<R<<"\n";
    }
    cout<<sum;
    return 0;
}