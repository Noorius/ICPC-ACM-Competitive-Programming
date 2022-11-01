#include <bits/stdc++.h>

using namespace std;

int main(){
    /*freopen("perm.in", "r", stdin);
    freopen("perm.out", "w", stdout);*/
    int n; cin>>n;

    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int fact = 1;
    for(int i=1; i<=n; i++){
        fact*=i;
    }

    int p = 1;
    if(n/2>a[0]){
        while(prev_permutation(a,a+n)){
            p++;
        } 
        cout<<p;
    }else{
        p = 0;
        while(next_permutation(a,a+n)){
            p++;
        }
        cout<<fact - p;
    }
    
    return 0;
}