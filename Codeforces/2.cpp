#include <bits/stdc++.h>

#define ll long long

using namespace std;

bool comp(ll a, ll b){
    if((a+b)%2!=0 and a<b){
        return true;
    }else return false;
}

int main(){
    int t; cin>>t;

    for(int s=0; s<t; s++){
        int n; cin>>n;
        ll b[n+1];


        b[0] = 0;

        bool nope = false;
        for(ll i=1; i<=n; i++){
            cin>>b[i];
            if(b[i-1]>b[i] and (b[i-1]+b[i])%2!=0){
                swap(b[i],b[i-1]);
            }else if(b[i-1]>b[i]){
                nope = true; break;
            }else{continue;}
        }

        if(nope){cout<<"No\n";} else {cout<<"Yes\n";}
                
    }   

    
    return 0;
}