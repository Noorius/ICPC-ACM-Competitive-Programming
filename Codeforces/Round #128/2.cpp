#include <bits/stdc++.h>

using namespace std;

long long q;

void solution(){
    int n, m; cin>>n>>m;

    vector<pair<int,int> > robots;

    int min_v, min_ind;
    min_v = min_ind = INT_MAX;

    for(int i=0; i<n; i++){
        string s; cin>>s;

        for(int j=0; j<m; j++){
            if(s[j]=='R'){
                min_v = min(min_v, i);
                min_ind = min(min_ind, j);

                robots.push_back({i,j});
            }
                
        }
    }

    for(auto c : robots){
        if(c.first-min_v < 0 or c.second-min_ind < 0){
            cout<<"NO\n";
            return;
        }

    }

    for(auto c : robots){
        if(c.first-min_v == 0 and c.second-min_ind == 0){
            cout<<"YES\n";
            return;
        }
    }

    cout<<"NO\n";
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin>>q;

    while(q--){
        solution();
    }

    return 0;
}