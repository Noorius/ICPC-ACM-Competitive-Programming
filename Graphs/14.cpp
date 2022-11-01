#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n; cin>>n;
    vector<pair<int,int> > vec(n, make_pair(0,0));

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int t; cin>>t;
            if(t==1){
                vec[i].second++;
                vec[j].first++;
            }
        }
    }
    vector<int> sources;
    vector<int> sinks;
    for(int i = 0 ; i<n; i++){
        if(vec[i].first==0) sources.push_back(i+1);
        if(vec[i].second==0) sinks.push_back(i+1);
    }
    cout<<sources.size()<<" ";
    for(int num : sources) cout<<num<<" ";
    cout<<"\n";
    cout<<sinks.size()<<" ";
    for(int num : sinks) cout<<num<<" ";
    return 0;
}