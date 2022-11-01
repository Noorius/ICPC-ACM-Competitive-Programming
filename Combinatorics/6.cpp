#include <bits/stdc++.h>

using namespace std;
vector<int> a;
vector<int> b;
int p;

void printing(){
    for(int j=0; j<b.size(); j++){
        cout<<b[j]<<" ";
    }
    cout<<"\n";
}

void calc(int i, int k){
    if(k==0){
        if(p==0){
            printing();
            exit(0);
        }
        p--;
        return;
    }
    for(int j = i; j < a.size(); j++){
        b.push_back(a[j]);
        calc(j+1, k-1);
        b.pop_back();
    }
}

int main(){
    freopen("comb.in", "r", stdin);
    freopen("comb.out", "w", stdout);/**/
    int n, k;
    cin>>n>>k>>p;   

    for(int i=0; i<n; i++){
        a.push_back(i+1);
    }

    //cout<<t<<" "<<p<<" "<<z<<endl;
    calc(0, k);
    
    return 0;
}