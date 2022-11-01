#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll t[2000001];
ll a[1000001];

void build(int v, int l, int r){
    if(l==r){
        t[v] = a[l];
    }else{
        int mid = l + (r - l) / 2;
        build(2*v, l, mid);
        build(2*v+1, mid + 1, r);
        t[v] = t[2*v] + t[2*v+1];
    }
}

ll get(int v, int l, int r, int L, int R){
    if(r<L || R<l || l>r){
        return 0;
    }
    if(L<=l && r<=R){
        return t[v];
    }
    int mid = l + (r - l) / 2;
    return get(2*v, l, mid, L, min(mid,R)) + get(2*v+1, mid+1, r, max(L,mid+1), R);
}

int main(){
    /*freopen("sum2.in", "r", stdin);
    freopen("sum2.out", "w", stdout);*/
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