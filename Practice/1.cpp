#include <bits/stdc++.h>

using namespace std;



void solution(){
    int n; cin>>n;
    vector<int> even, odd;
    for(int i=0; i<n; i++){
        int t; cin>>t;
        if(t%2==0){
            even.push_back(t);
        }else{
            odd.push_back(t);
        }
    }

    for(int c : even){
        cout<<c<<" ";
    }
    for(int c : odd){
        cout<<c<<" ";
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);/**/

    freopen("order.in", "r", stdin);
    freopen("order.out", "w", stdout);
    
    solution(); 

    return 0;
}