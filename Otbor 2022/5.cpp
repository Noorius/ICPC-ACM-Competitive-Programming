#include <bits/stdc++.h>

using namespace std;


void solution(){
    int n, k;
    cin>>n>>k;

    cout << k + (k-1)/(n-1) << endl;
    
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