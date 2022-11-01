#include <bits/stdc++.h>

//#define N 2*10e2
#define ll long long
using namespace std;


int main(){
    // freopen("bad.in", "r", stdin);
    // freopen("bad.out", "w", stdout);

    int n, m;
    cin>>n>>m;

    vector<string> candidates;

    for(int i = 0; i < n; i++){
        string t; cin>>t;
        candidates.push_back(t);
    }

    vector<string> votes(m);
    vector<float> p(n,0);
    float invalid = 0;

    for(int i = 0; i<m; i++){
        string t; cin>>t; votes.push_back(t);
        vector<int> poses;
        for(int l = 0; l < t.size(); l++){
            if(t[l] == 'X'){
                poses.push_back(l);
            }
        }

        if(poses.size() == 1){
            p[poses[0]] ++;
        }else{
            invalid ++;
        }
    }

    vector<pair<string, int > > ans;
    for(int i = 0; i < n; i++){
        //double per = (100 * p[i] * 1.0) / (m * 1.0);
        ans.push_back(make_pair(candidates[i], p[i] ) ); // (round(per * 100.0) / 100.0 ) )
    }

    sort(ans.begin(), ans.end(), [](const pair<string, int>& a, const pair<string, int> b){
        if(a.second == b.second) return false;
        else return a.second > b.second;
    });

    for(int i = 0; i < ans.size(); i++){
        cout<< ans[i].first <<" " << fixed << std::setprecision(2) << ((100 * ans[i].second * 1.0) / (m * 1.0)) <<"%"<<endl;
        // cout<  < ans[i].first <<" "<<ans[i].second <<"%"<<endl;
    }
    cout<<"Invalid " << fixed << std::setprecision(2) <<(invalid * 100 * 1.0) / (m * 1.0) << "%" <<endl;


    return 0;
}