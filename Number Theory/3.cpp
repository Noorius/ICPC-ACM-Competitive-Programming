#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    ll n; cin>>n;


    for(ll i=0; i<n; i++){
        ll k; cin>>k;
        ll ans = 0;
        
        deque<ll> d;

        for(ll j=1; ans!=k;){
            if(k<3){
                break;
            }
            if(ans<k){
                ans+=j;
                d.push_back(j);
                j++;
            }else if(ans>k){
                ans-=d.front();
                d.pop_front(); 
            }
            
        }
        

        if(d.size()<=1){
            cout<<"IMPOSSIBLE";
        }
        else{
           cout<<ans<<" = ";
            while(d.size()!=1){
                cout<<d.front()<<" + ";
                d.pop_front();
            } 
            cout<<d.front();
        }


        cout<<"\n";
    }
}