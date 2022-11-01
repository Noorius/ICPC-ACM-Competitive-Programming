#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    
    ll N = 10000100;

    vector<bool> was(N+1, 1);
    

    for(int i=2; i<sqrt(N); i++){
        if(was[i]){
            for(int j=i*i; j<N; j+=i){
                was[j] = false;
            }
        }
    }

    vector<ll> counter(N, 0);
    ll sum = 0;
    for(int i=2; i<N; i++){
        if(was[i]){
            counter[i] = counter[i-1] + 1;
        }else{
            counter[i] = counter[i-1];
        }
    }

    ll a, b;
    while(cin>>a>>b){
        if(a==0 and b==1) cout<<0<<endl<<endl;
        
        else{ 
            if(a==0) a=2;
            ll sum1 = 0;
            sum1 = counter[b] - counter[a-1];
            cout<<sum1<<"\n\n"; 
        }
    }

}