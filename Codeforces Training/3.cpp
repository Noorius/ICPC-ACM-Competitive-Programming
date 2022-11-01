#include <bits/stdc++.h>

using namespace std;


void solution(){
    int n, x, m; cin>>n>>x>>m;
    
    int l = x, r = x;

    while(m--){
        int l1, r1; cin>>l1>>r1;
        if((l1<=l and r1 >= l) or(l1<= r and r1 >= r)){
            l = min(l1, l);
            r = max(r1, r);
        }
    }
    cout << r - l + 1 <<"\n";
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