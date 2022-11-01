#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("inverse.in", "r", stdin);
    freopen("inverse.out", "w", stdout);/**/
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int b[n];
    for(int j=0; j<n; j++){
        b[a[j]-1] = j + 1;
    }

    for(int i=0; i<n; i++){
        cout<<b[i]<<" ";
    }

    
    return 0;
}