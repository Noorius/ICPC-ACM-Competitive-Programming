#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, m; cin>>n>>m;
    vector<vector<int> > vec(n);

    for(int i=0; i<m; i++){
        int st, en; cin>>st>>en; st--; en--;
        vec[st].push_back(en);
        vec[en].push_back(st);
    }

    int cnt = 0;
    for(int i = 0 ; i<n; i++){
        if(vec[i].size()==1){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}