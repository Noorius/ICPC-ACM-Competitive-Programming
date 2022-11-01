#include <bits/stdc++.h>
#define ll long long
using namespace std;

//ll t[2000001];
vector<pair<int,int> > t(200001);
ll a[100001];

void build(int v, int l, int r){
    if(l==r){
        t[v] = make_pair(a[l],1);
    }else{
        int mid = l + (r - l) / 2;
        build(2*v, l, mid);
        build(2*v+1, mid + 1, r);
        if(t[2*v].first==t[2*v+1].first){
            t[v].second = t[2*v].second + t[2*v+1].second;
            t[v].first = t[2*v].first;
        }else{
            t[v].second = max(t[2*v].second,t[2*v+1].second);
            t[v].first = (t[2*v].second>t[2*v+1].second) ? t[2*v].second : t[2*v+1].second;
        }
    }
}

ll get(int v, int l, int r, int L, int R){
    if(r<L || R<l || l>r){
        return 0;
    }
    if(L<=l && r<=R){
        return t[v].second;
    }
    int mid = l + (r - l) / 2;
    return get(2*v, l, mid, L, min(mid,R)) + get(2*v+1, mid+1, r, max(L,mid+1), R);
}

int main(){
    /*freopen("sum2.in", "r", stdin);
    freopen("sum2.out", "w", stdout);*/
    int n, q; cin>>n>>q; 

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    build(1,0,n-1);


    for(int i=0; i<2*n; i++){
        cout<<t[i].second<<"\n";
        cout<<t[2*i].first<<"-"<<t[2*i].second<<" | "<<t[2*i+1].first<<"-"<<t[2*i+1].second<<endl;
        cout<<"------------------------------"<<endl;
    }
    /*for(int i=0; i<q; i++){
        int st, en; cin>>st>>en; st--; en--;
        cout<<get(1, 0, n-1, st, en)<<"\n";
    }
    cin>>n;*/
    return 0;
}