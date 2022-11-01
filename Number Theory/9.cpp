#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    
    ll N = 10000100;

    vector<pair<bool,ll> > was(N+1, make_pair(1,0));
    

    for(int i=1; i<sqrt(N); i++){
        if(was[i].first){
            for(int j=i; j<N; j+=i){
                was[j].first = false;
                was[j].second++;
            }
        }
    }

    vector<ll> counter(N, 0);
    for(int i=2; i<N; i++){
        if(!was[i].first and was[i].second == 1){
            counter[i] = counter[i-1] + 1;
        }else{
            counter[i] = counter[i-1];
        }
    }

    ll a, b;
    while(cin>>a>>b){
        if(a==0) a=1;
        ll sum1 = 0;
        sum1 = counter[b] - counter[a-1];
        cout<<sum1<<"\n\n"; 
    }

}