#include <bits/stdc++.h>

using namespace std;


int main(){
    /*freopen("maze.in", "r", stdin);
    freopen("maze.out", "w", stdout);*/

    int q; cin>>q;
    string side = "ESWN";

    for(int _=0; _<q; _++){
        int n; cin>>n;
        int sum = 0;
        for(int i=0; i<n; i++){
            int t; cin>>t;
            if(t%2==0){
                sum++;
            }
        }

        if(sum==n){
            sum=-1;
        }
        cout<<sum<<"\n";
    }

    return 0;
}