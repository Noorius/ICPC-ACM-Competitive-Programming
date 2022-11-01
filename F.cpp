#include <bits/stdc++.h>

using namespace std;


int main(){
    /*freopen("maze.in", "r", stdin);
    freopen("maze.out", "w", stdout);*/

    int q; cin>>q;

    for(int _=0; _<q; _++){
        int n, k; cin>>n>>k;
        int sum = 0;
        bool was[n];

        int l = 0, r = n-1;
        
        int a[n+1];
        for(int i=0; i<n; i++){
            cin>>a[i];
            was[a[i]-1] = false;
        }

        int maxi = INT_MIN;

        for(int i=0; i<n; i++){
            for(int j=1; j<n; j++){
                if(was[a[i]-1]){
                    
                }
            }
        }

    }

    return 0;
}