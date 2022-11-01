#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<pair<ll, ll> > t(200001);
ll a[100001];

void build(int v, int l, int r){
    if(l==r){
        t[v] = make_pair(a[l],a[l]);
    }else{
        int mid = l + (r - l) / 2;
        build(2*v, l, mid);
        build(2*v+1, mid + 1, r);

        pair<ll,ll> num1 = t[2*v];
        pair<ll,ll> num2 = t[2*v+1]; 
        
        ll max1 = -1, max2 = -1;
        if(num1.first>num2.first){
            max1 = num1.first;
            max2 = num2.first;
        }else{
            max1 = num2.first;
            max2 = num1.first;
        }
        
        if(num1.second > )

        

        t[v] = make_pair(max1,max2);
    }
}


pair<ll,ll> get(int v, int l, int r, int L, int R){
    if(r<L || R<l || l>r){
        return make_pair(-1,-1);
    }
    if(L<=l && r<=R){
        return t[v];
    }else{
        int mid = l + (r - l) / 2;
        pair<ll,ll> num1 = get(2*v, l, mid, L, min(mid,R));
        pair<ll,ll> num2 = get(2*v+1, mid+1, r, max(mid+1,L), R); //

        ll max1 = num1.first;
        ll max2 = num1.second;
        if (num2.first > max1 && max1 < max2) 
			max1 = num2.first; 
		else if (num2.first > max2) 
			max2 = num2.first; 
        
        if (num2.second > max1 && max1 < max2) 
			max1 = num2.second;  
		else if (num2.second > max2) 
			max2 = num2.second;  

        return make_pair(max1,max2);
    }
}

void U(int v, int l, int r, int i, int x){
    if(l==r){
        t[v] = make_pair(x,x);
    }
    int mid = l + (r - l) / 2;
    if(i<=mid){
        U(2*v, l, mid, i, x);
    }else{
        U(2*v+1, mid+1, r, i, x);
    }

    pair<ll,ll> num1 = t[2*v];
    pair<ll,ll> num2 = t[2*v+1]; 
    
    ll max1 = num1.first;
    ll max2 = num1.second;
    if (num2.first > max1 && max1 < max2) 
        max1 = num2.first; 
    else if (num2.first > max2) 
        max2 = num2.first; 
    
    if (num2.second > max1 && max1 < max2) 
        max1 = num2.second;  
    else if (num2.second > max2) 
        max2 = num2.second;  

    t[v] = make_pair(max1,max2);
}

int main(){
    /*ios_base::sync_with_stdio(false);
    cin.tie(0);*/

    int n; cin>>n;
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    build(1,0,n-1);

    for(int i = 0; i<2*n; i++){
        cout<<i<<" : "<<t[i].first<<" "<<t[i].second<<"\n";
    }
    cout<<"\n";

    /*int m; cin>>m;
    for(int i=0; i<m; i++){
        char op; cin>>op;
        if(op == 'U'){
            int it;
            ll x; cin>>it>>x;
            U(1, 0, n-1, it-1, x);
        }else{
            int st, en; cin>>st>>en;
            pair<ll,ll> num3 = get(1, 0, n-1, st-1, en-1);
            cout<<num3.second<<" "<<num3.first<<"\n";
        }
    }*/
    
    return 0;
}