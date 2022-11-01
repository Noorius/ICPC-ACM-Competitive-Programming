#include <bits/stdc++.h>

using namespace std;


void solution(){
    int a, b, c; cin>>a>>b>>c;
    
    int one = abs(a - 1), two = abs(1 - c) + abs(b - c);

    if(one > two){
        cout<<2<<"\n";
    }else if(two > one){
        cout<<1<<"\n";
    }else{
        cout<<3<<"\n";
    }

    //cout<<one<<" "<<two<<"\n";
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);/**/

    int n;
    cin>>n;

    while(n--){
       solution();  
    }
    

    return 0;
}