#include <bits/stdc++.h>
 
using namespace std;

void solution(){
    int n, m, x, y;
    cin>>n>>m>>x>>y;

    y = min(y, 2 * x);

    char a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    int ans = 0;
    
    for(int i=0; i<n; i++){
        int sin = 0;
        for(int j=0; j < m; j++){
            if(a[i][j] == '.') {
                sin++;
            }
            if(a[i][j] == '*' or j==m-1){
                ans += min(sin/2 * y + sin%2 * x, sin*x);
                sin = 0;

                //cout<<sin<<" "<<min(sin/2 * y + sin%2 * x, sin*x)<<" "<<j<<" "<<ans<<"\n";
            }
        }
    }
    cout << ans <<"\n";

    // if(x*2 < y){
    //     cout<<sin * x;
    // }else{
    //     cout<<doub*y + (sin - doub*2) * x;
    // }
    // cout<<"\n";
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n; cin>>n;

    while(n--){
        solution();
    }
 
    return 0;
}