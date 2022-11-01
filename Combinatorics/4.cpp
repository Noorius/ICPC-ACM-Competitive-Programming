#include <bits/stdc++.h>

using namespace std;
vector<int> a;
vector<int> b;

void calc(int i, int k){
    if(k==0){
        for(int j=0; j<b.size(); j++){
            cout<<b[j]<<" ";
        }
        cout<<"\n";
        return;
    }
    for(int j = i; j < a.size(); j++){
        b.push_back(a[j]);
        calc(j+1, k-1);
        b.pop_back();
    }
}

int main(){
    freopen("choose.in", "r", stdin);
    freopen("choose.out", "w", stdout);/**/
    int n, k;
    cin>>n>>k;
    

    for(int i=0; i<n; i++){
        a.push_back(i+1);
    }
    
    calc(0, k);
    
    return 0;
}