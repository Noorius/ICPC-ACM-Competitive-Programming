#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, m; cin>>n>>m;
    vector<pair<int,int> > vec(n, make_pair(0,0));

    for(int i=0; i<m; i++){
        int st, en; cin>>st>>en; st--; en--;
        vec[st].second++;
        vec[en].first++;
    }

    for(int i = 0 ; i<n; i++){
        cout<<vec[i].first<<" "<<vec[i].second<<"\n";
    }
    
    return 0;
}