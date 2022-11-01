#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll t[4000001];

void update(int v, int l, int r, int L, int R, ll x){
    if(r<L || R<l || l>r){
        return;
    }
    if(L==l && r==R){
        t[v] += x;
    }else{
        int mid = l + (r - l) / 2;
        update(2*v, l, mid, L, min(mid,R), x); //
        update(2*v+1, mid+1, r, max(mid+1,L), R, x); //
    }
}

ll q(int v, int l, int r, int i){
    if(l==r){
        return t[v];
    }
    int mid = l + (r - l) / 2;
    if(i<=mid){
        return t[v] + q(2*v, l, mid, i);
    }else{
        return t[v] + q(2*v+1, mid+1, r, i);
    }
}

int main(){
    /*ios_base::sync_with_stdio(false);
    cin.tie(0);*/

    int n, m; cin>>n>>m;

    for(int i=0; i<m; i++){
        char op; cin>>op;
        if(op == 'A'){
            int st, en;
            ll x; cin>>st>>en>>x;
            update(1, 0, n-1, st, en, x);
        }else{
            int it; cin>>it;
            cout<<q(1, 0, n-1, it)<<"\n";
        }
    }
    
    return 0;
}