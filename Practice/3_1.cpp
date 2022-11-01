#include <bits/stdc++.h>

using namespace std;

#define ll long long 

void solution(){
    int n; cin>>n;

    vector<ll> vec;

    for(int i=0; i<n; i++){
        ll t; cin>>t;
        vec.push_back(t);
    }

    if(n==1){
        cout<<-1<<"\n"; return;
    }else if(n==2){
        cout<<-1<<"\n"<<-1<<"\n"; return;
    }


    ll f, s, th;
    f = s = th = INT_MIN;
    /*f = vec[0];
    s = vec[1];
    th = vec[2];*/

    for(int i=0; i<n; i++){
        if(vec[i]>f){
            th = s;
            s = f;
            f = vec[i];  
        }else if(vec[i]>s){
            th = s;
            s = vec[i];
        }else if(vec[i]>th){
            th = vec[i];
        }
        if(i<2){
            cout<<-1<<"\n";
        }else{
            cout<<f*s*th<<" "<<"\n";
            cout<<f<<" "<<s<<" "<<th<<"\n\n";
        }
            
    }

}

int main(){
    /*ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);*/

    /*freopen("mult.in", "r", stdin);
    freopen("mult.out", "w", stdout);*/
    
    solution(); 

    return 0;
}