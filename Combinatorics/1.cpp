#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("perm.in", "r", stdin);
    freopen("perm.out", "w", stdout);
    int n; cin>>n;

    int a[n];
    int fact = 1;
    for(int i=0; i<n; i++){
        a[i] = i+1;
        fact*=i+1;
    }
    for(int i=0; i<fact; i++){
        for(int i=0; i<n; i++){
            cout<<a[i]<<" ";
        }  
        cout<<"\n";
        next_permutation(a, a+n);
    }

    
    return 0;
}