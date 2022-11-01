#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<pair<ll,ll> > t(300000);
ll a[100100];

void build(int v, int l, int r){
    if(l==r){
        t[v] = make_pair(a[l],a[l]);
    }else{
        int mid = l + (r - l) / 2;
        build(2*v, l, mid);
        build(2*v+1, mid + 1, r);
        t[v] = make_pair(min(t[2*v].first, t[2*v+1].first),max(t[2*v].second, t[2*v+1].second));
    }
}

pair<ll,ll> get(int v, int l, int r, int L, int R){
    if(r<L || R<l){
        return make_pair(INT_MAX,INT_MIN);
    }
    if(L<=l && r<=R){
        return t[v];
    }
    int mid = l + (r - l) / 2;
    pair<ll,ll> num1 = get(2*v, l, mid, L, R);
    pair<ll,ll> num2 = get(2*v+1, mid+1, r, L, R);
    return make_pair(min(num1.first,num2.first),max(num1.second,num2.second));
}

void update(int v, int l, int r, int i, int x){
    if(l==r){
        t[v] = make_pair(x,x);
        return;
    }
    int mid = l + (r - l) / 2;
    if(i<=mid){
        update(2*v, l, mid, i, x);
    }else{
        update(2*v+1, mid+1, r, i, x);
    }
    t[v] = make_pair(min(t[2*v].first, t[2*v+1].first),max(t[2*v].second, t[2*v+1].second));
}

int main(){
    /*ios_base::sync_with_stdio(false);
    cin.tie(0);

    freopen("rvq.in", "r", stdin);
    freopen("rvq.out", "w", stdout);/**/

    for(int i=1; i<=100000; i++){
        /*ll num1 = ((i % 12345) * (i % 12345)) % 12345;
        ll num2 = ((i % 23456) * (i % 23456) * (i % 23456)) % 23456;
        a[i] = num1 + num2;*/
        a[i] = (i % 12345) * (i % 12345) % 12345 + ((i % 23456) * (i % 23456) % 23456) * (i % 23456) % 23456;
    }

    build(1,1,100001);

    /*for(int i=0; i<=10; i++){
        cout<<t[i].first<<" "<<t[i].second<<endl;
    }*/

    int q; cin>>q;
    for(int i=0; i<q; i++){
        int st, en; cin>>st>>en; //st--; en--;
        if(st>0){
            pair<int,int> m = get(1, 1, 100001, st, en);
            cout<<m.second-m.first<<endl;
            //cout<<m.second<<" - "<<m.first<<endl;
        }
        else if(st<0){
            update(1, 1, 100001, abs(st), en);
        }
    }
    
    return 0;
}