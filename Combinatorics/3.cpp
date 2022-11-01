#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("success.in", "r", stdin);
    freopen("success.out", "w", stdout);/**/
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int j;
    for(j = n-1; j>0; j--){
        if(a[j] > a[j-1]){
            j--;
            break;
        }
    }
    next_permutation(a+j, a+n);

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    
    return 0;
}