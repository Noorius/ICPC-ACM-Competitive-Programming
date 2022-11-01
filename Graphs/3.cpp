#include <bits/stdc++.h>

using namespace std;

int dp[101][101];

int main(){
    
    int n, m; cin>>n>>m;
    vector<pair<int,int> > vec;
    bool multi = false;
    for(int i=0; i<m; i++){
        int st,en; cin>>st>>en; st--; en--;
        if(dp[st][en]==1){
            multi = true; break;
        }
        dp[st][en] = 1;
    }
    if(multi)
        cout<<"YES";
    else
        cout<<"NO";
    
    return 0;
}