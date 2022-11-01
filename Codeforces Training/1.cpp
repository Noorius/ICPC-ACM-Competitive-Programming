#include <bits/stdc++.h>

using namespace std;


void solution(){
    int n; cin>>n;
    
    if(n<=3){
        cout<<"NO";
    }else if((n-2)%2==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);/**/

    
    solution(); 

    return 0;
}