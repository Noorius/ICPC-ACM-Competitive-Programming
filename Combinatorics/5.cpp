#include <bits/stdc++.h>

using namespace std;
vector<int> a;
vector<int> b;

void printing(){
    for(int j=0; j<b.size(); j++){
        cout<<b[j]<<" ";
    }
    cout<<"\n";
    return;
}

void calc(int i, int k){
    if(k==0){
        printing();
        return;
    }
    for(int j = i; j < a.size(); j++){
        b.push_back(a[j]);
        calc(j+1, k-1);
        b.pop_back();
    }
}

int main(){
    freopen("generation.in", "r", stdin);
    freopen("generation.out", "w", stdout);/**/
    int n, k;
    cin>>n>>k;
    

    for(int i=n; i>0; i--){
        a.push_back(i);
    }
    
    calc(0, k);
    
    return 0;
}