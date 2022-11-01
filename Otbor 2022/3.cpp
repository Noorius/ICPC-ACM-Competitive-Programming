#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n;
    cin>>n;
    string s; cin>>s;
    
    if(n!=5){
        cout<<"NO\n"; return;
    }
    
    sort(s.begin(), s.end());
    if(s=="Timru") cout<<"YES\n"; else cout<<"NO\n";
    return;
}

int main(){
    /*freopen("maze.in", "r", stdin);
    freopen("maze.out", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);*/

    int n; cin>>n;

    while(n--){
        solution();
    }

    
    
    return 0;
}