#include <bits/stdc++.h>

using namespace std;


void solution(){
    int n;
    cin>>n;

    if(n == 0){
        cout<<-3<<" "<<1<<" "<<2<<"\n";
    }else if(n==1 or n==-1){
        cout<<-2<<" "<<2<<" "<<n<<'\n';
    }else{
        cout<<-1<<" "<<1<<" "<<n<<'\n';
    }
    
}

int main(){
    /*ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);*/

    /*freopen("brothers.in", "r", stdin);
    freopen("brothers.out", "w", stdout);*/
    
    int q; cin>>q;
    while(q--){
        solution();
    }
     
    return 0;
}