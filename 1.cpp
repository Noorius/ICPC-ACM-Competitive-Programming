#include <bits/stdc++.h>

using namespace std;


int main(){
    /*freopen("maze.in", "r", stdin);
    freopen("maze.out", "w", stdout);*/

    int q; cin>>q;
    string side = "ESWN";

    for(int _=0; _<q; _++){
        int n; cin>>n;
        string s; cin>>s;

        int sum = 0;
        for(int i=0; i<n; i++){
            if(s[i]=='0'){
                sum++;
            }else{
                sum--;
            }
            if(sum==4){
                sum=0;
            }
            if(sum==-1){
                sum=3;
            }
        }

        cout<<side[sum]<<"\n";

    }

    return 0;
}