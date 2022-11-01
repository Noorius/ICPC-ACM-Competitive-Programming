#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll min_tree[2000000];
ll max_tree[2000000];
ll a[100001];

void build(int v, int l, int r){
    if(l==r){
        min_tree[v] = a[l];
        max_tree[v] = a[l];
    }else{
        int mid = l + (r - l) / 2;
        build(2*v, l, mid);
        build(2*v+1, mid + 1, r);
        min_tree[v] = min(min_tree[2*v], min_tree[2*v+1]);
        max_tree[v] = max(max_tree[2*v], max_tree[2*v+1]);
    }
}

pair<ll,ll> get_min(int v, int l, int r, int L, int R){
    if(r<L || R<l){
        return make_pair(INT_MAX,INT_MIN);
    }
    if(L<=l && r<=R){
        return make_pair(min_tree[v],max_tree[v]);
    }
    int mid = l + (r - l) / 2;
    pair<ll,ll> p1 = get_min(2*v, l, mid, L, R);
    pair<ll,ll> p2 = get_min(2*v+1, mid+1, r, L, R);
    return make_pair(min(p1.first,p2.first),max(p1.second,p2.second));
}

/*ll get_max(int v, int l, int r, int L, int R){
    if(r<L || R<l){
        return INT_MIN;
    }
    if(L<=l && r<=R){
        return ;
    }
    int mid = l + (r - l) / 2;
    return max(get_max(2*v, l, mid, L, R),get_max(2*v+1, mid+1, r, L, R));
}*/

void update(int v, int l, int r, int i, int x){
    if(l==r){
        min_tree[v] = x;
        max_tree[v] = x;
        return;
    }
    int mid = l + (r - l) / 2;
    if(i<=mid){
        update(2*v, l, mid, i, x);
    }else{
        update(2*v+1, mid+1, r, i, x);
    }
    max_tree[v] = max(max_tree[2*v], max_tree[2*v+1]);
    min_tree[v] = min(min_tree[2*v], min_tree[2*v+1]);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    /*freopen("rvq.in", "r", stdin);
    freopen("rvq.out", "w", stdout);*/

    for(int i=1; i<=100000; i++){
        ll num1 = ((i % 12345) * (i % 12345)) % 12345;
        ll num2 = ((i % 23456) * (i % 23456) * (i % 23456)) % 23456;
        a[i] = num1 + num2;
    }

    build(1,1,100001);

    /*for(int i=0; i<=10; i++){
        cout<<t[i].first<<" "<<t[i].second<<endl;
    }*/

    int q; cin>>q;
    for(int i=0; i<q; i++){
        int st, en; cin>>st>>en; //st--; en--;
        if(st>0){
            //cout<<get_max(1, 1, 100000, st, en) - get_min(1, 1, 100000, st, en)<<endl;
            //cout<<get_max(1, 1, 100000, st, en)<<" "<<get_min(1, 1, 100000, st, en)<<endl;
            pair<ll,ll> p = get_min(1, 1, 100001, st, en);
            cout<<p.second - p.first<<"\n";
        }
        else if(st<0){
            update(1, 1, 100001, abs(st), en);
        }
    }
    
    return 0;
}