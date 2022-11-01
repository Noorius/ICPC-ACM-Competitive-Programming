#include <bits/stdc++.h>

using namespace std;


int main(){
    /*freopen("maze.in", "r", stdin);
    freopen("maze.out", "w", stdout);*/

    int q; cin>>q;

    for(int _=0; _<q; _++){
        int n, k; cin>>n>>k;
        int sum = 0;
        
        int a[n+1];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a,a+n);

        int num_teams = 0;

        for(int i=0, j=n-1; ; ){
            if(i>j) break;

            if(a[j]>=k){
                num_teams++;
                j--;
            }else if(a[j]+a[i]>=k and i!=j){
                num_teams++;
                i++; j--;
            }else{
                i++;
            }
        }

        cout<<num_teams<<"\n";
    }

    return 0;
}