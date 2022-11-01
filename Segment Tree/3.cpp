#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll t[1000000];
vector<ll> a(1000000);

/*void build(int v, int l, int r){
    if(l==r){
        t[v] = a[l];
    }else{
        int mid = l + (r - l) / 2;
        build(2*v, l, mid);
        build(2*v+1, mid + 1, r);
        t[v] = t[2*v] + t[2*v+1];
    }
}*/

void push(int v){
    /*if(t[v]!=0){
        t[2*v] = t[2*v+1] = t[v];
        t[v] = t[2*v] + t[2*v+1];
    }*/
}

ll get(int v, int l, int r, int L, int R){
    if(r<L || R<l){
        return 0;
    }
    //push(v);
    if(L<=l && r<=R){
        return t[v];
    }
    int mid = l + (r - l) / 2;
    return get(2*v, l, mid, L, min(mid,R)) + get(2*v+1, mid+1, r, max(L,mid+1), R);
}

void change_x(int v, int l, int r, int L, int R, ll x){
    if(r<L || R<l || l>r){
        return;
    }
    if(L<=l && r<=R){ //
        t[v] = x;
    }else{
        //push(v);
        int mid = l + (r - l) / 2;
        change_x(2*v, l, mid, L, min(mid,R), x);
        change_x(2*v+1, mid+1, r, max(L,mid+1), R, x); 
        t[v] = t[2*v] + t[2*v+1];
    }
}

int main(){
    /*freopen("sum.in", "r", stdin);
    freopen("sum.out", "w", stdout);*/
    int n, q; cin>>n>>q; 

    //build(1,0,n-1);
    
    for(int i=0; i<q; i++){
        char op; cin>>op;
        int l,r; cin>>l>>r; l--; r--;
        if(op=='A'){
            ll x; cin>>x;
            change_x(1, 0, n-1, l, r, x);
        }else{
            cout<<get(1, 0, n-1, l, r)<<"\n";
        }
        for(int k=1; k<=2*n-1; k++){
            cout<<t[k]<<" ";
        }
        cout<<"\n";/**/
        
    }
    
    return 0;
}