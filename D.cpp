#include <bits/stdc++.h>

using namespace std;


int main(){
    /*freopen("maze.in", "r", stdin);
    freopen("maze.out", "w", stdout);*/

    int q; cin>>q;

    for(int _=0; _<q; _++){
        int a, b; cin>>a>>b;
        int alice = a xor b;

        if((a | b) > alice){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }

    }

    return 0;
}