#include <bits/stdc++.h>

using namespace std;

int n;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    
    map<string, int> freq;
    vector<pair<pair<string,string>, pair<int,int> > > scores;

    int maxi = INT_MIN;
    for(int i=1; i<=n; i++){
        string t1, _, t2, _1;
        int sc1, sc2;
        cin>>t1>>_>>t2>>sc1>>_1>>sc2;
        freq[t1]++;
        freq[t2]++;
        scores.push_back({{t1,t2},{sc1,sc2}});
        maxi = max(max(freq[t1], freq[t2]), maxi);
    }

    //vector<pair<string, int> > table = sort(freq);
    vector<vector<pair< pair<string,string>, pair<int,int> > > >ans(maxi+1);

    for(auto c : scores){
        ans[min(freq[c.first.first], freq[c.first.second])].push_back(c);
    }

    for(int i = 1; i <= maxi; i++){
        if(ans[i].size()==1){
            cout<<"Final\n";
        }else{
            cout<<"1/"<<ans[i].size()<<" Finals\n";
        }

        for(auto c1 : ans[i]){
            cout<<c1.first.first<<" - "<<c1.first.second<<" "<<c1.second.first<<" : "<<c1.second.second<<"\n";
        }
    }

    cout<<"Winner: ";
    if(ans[maxi][0].second.first > ans[maxi][0].second.second){
        cout<<ans[maxi][0].first.first<<"\n";
    }else{
        cout<<ans[maxi][0].first.second<<"\n";
    }
    
    
    return 0;
}