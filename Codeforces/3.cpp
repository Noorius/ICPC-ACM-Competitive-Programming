#include <bits/stdc++.h>

#define ll long long

using namespace std;


int main(){
    ll n, q; cin>>n>>q;

    vector<pair<ll,ll> > vec(n+1, make_pair(0, 1));
    vector<vector<ll> > color()

    for(ll i=0; i<q; i++){
        string command; cin>>command;

        if(command=="Query"){
            ll k; cin>>k;
            cout<<vec.at(k-1).first<<"\n";
        }

        else if(command=="Add"){
            ll c, x; cin>>c>>x;
            for(ll i=0; i<vec.size(); i++){
                if(vec.at(i).second==c){
                    vec.at(i).first += x;
                }
            }
        }

        else if(command=="Color"){
            ll l, r, c; cin>>l>>r>>c;
            for(ll i=l-1; i<r; i++){
                vec.at(i).second = c;
            }
        }
    }
    
    return 0;
}

//vec.at(i)