#include <bits/stdc++.h>

using namespace std;

int t[2001];
int a[1001];

void build(int v, int l, int r){
    if(l==r){
        t[v] = a[l];
    }else{
        int mid = l + (r - l) / 2;
        build(2*v, l, mid);
        build(2*v+1, mid + 1, r);
        t[v] = min(t[2*v], t[2*v+1]);
    }
}

int get(int v, int l, int r, int L, int R){
    if(r<L || R<l){
        return INT_MAX;
    }
    if(L<=l && r<=R){
        return t[v];
    }
    int mid = l + (r - l) / 2;
    return min(get(2*v, l, mid, L, R),get(2*v+1, mid+1, r, L, R));
}

int main(){
    freopen("stupid_rmq.in", "r", stdin);
    freopen("stupid_rmq.out", "w", stdout);
    int n; cin>>n; 

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    build(1,0,n-1);

    int q; cin>>q;
    for(int i=0; i<q; i++){
        int st, en; cin>>st>>en; st--; en--;
        cout<<get(1, 0, n-1, st, en)<<"\n";
    }
    
    return 0;
}