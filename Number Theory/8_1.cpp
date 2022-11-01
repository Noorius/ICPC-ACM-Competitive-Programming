#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    
    ll N = 10000001;

    vector<bool> was(N+1, true);

    for(int i=2; i*i<=N; i++){
        if(was[i]){
            for(int j=i*i; j<=N; j+=i){
                was[j] = false;
            }
        }
    }
        
    ll a, b;
    while(cin>>a>>b){
        if(a==0 and b==1) cout<<0<<endl<<endl;
        else{
            if(a==0 or a==1) a=2;
            ll sum1 = 0;
            sum1 = accumulate(was.begin()+a, was.begin()+b,sum1) + was[b];
            cout<<sum1<<endl<<endl;
        }
    }

}