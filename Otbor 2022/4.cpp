#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n;
    cin>>n;

    map<string,vector<int> > mp;
    
    for(int i=0; i<n*3; i++){
        string s; cin>>s;
        mp[s].push_back(i / n);
    }

    map<string,vector<int> >::iterator it;
    vector<int> scores = {0, 0, 0};

    for(it=mp.begin(); it!=mp.end(); it++){
        /*cout<<(it->first)<<endl;
        for(int c : it->second){
            cout<<c<<" ";
        }
        cout<<endl;*/
        if(it->second.size() == 1){
            scores[it->second[0]] += 3;
        }else if(it->second.size() == 2){
            scores[it->second[0]] += 1;
            scores[it->second[1]] += 1;
        }
    }

    for(int c : scores){
        cout<<c<<" ";
    }
    cout<<endl;/**/
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