#include <bits/stdc++.h>

using namespace std;

int a[200001], t[400001];

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

void push (int v) {
	if (t[v] != -1) {
		t[v*2] = t[v*2+1] = t[v];
		t[v] = -1;
	}
}

void update(int v, int l, int r, int i, int x){
    if(l==r){
        t[v] = x;
        return;
    }
    //push (v);
    int mid = l + (r - l) / 2;
    if(i<=mid){
        update(2*v, l, mid, i, x);
    }else{
        update(2*v+1, mid+1, r, i, x);
    }
    t[v] = t[2*v] + t[2*v+1];
}

void update (int v, int tl, int tr, int l, int r, int add) {
	if (l > r)
		return;
	if (l == tl && tr == r)
		t[v] = add;
	else {
		int tm = (tl + tr) / 2;
		update (v*2, tl, tm, l, min(r,tm), add);
		update (v*2+1, tm+1, tr, max(l,tm+1), r, add);
	}
}


void solution(){
    int n, q; cin>>n>>q;
    
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    build(1,0,n-1);

    for(int i=0; i<q; i++){
        int op; cin>>op;
        if(op==1){
            int pos, n_v; cin>>pos>>n_v;
            update(1, 0, n-1, pos-1, n_v);
        }else if(op==2){
            int x; cin>>x;
            update(1, 0, n-1, 0, n-1, x);
            //t[1] = x;
        }
        for(int j=1; j<2*n; j++){
            cout<<t[j]<<" ";
        } cout<<"\n";
    }
}

int main(){
    /*ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);*/

    solution(); 

    return 0;
}