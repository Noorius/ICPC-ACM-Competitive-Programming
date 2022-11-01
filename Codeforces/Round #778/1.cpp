#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    for(int i=0; i<t; i++){
        int n; cin>>n;
        vector<int> v(n, 0);
        for(int j=0; j<n; j++){
            cin>>v[j];
        }

        sort(v.begin(), v.end());
        cout<<v[v.size()-1]+v[v.size()-2]<<"\n";
    }
    

    
    return 0;
}