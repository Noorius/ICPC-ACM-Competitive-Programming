#include <bits/stdc++.h>

using namespace std;

int q, x, y;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin>>q;

    while(q--){
        cin>>x>>y;
        if(y%x!=0){
            cout<<0<<" "<<0<<'\n';
        }else{
            cout<<1<<" "<<y/x<<"\n";
        }
    }
    
    

    return 0;
}