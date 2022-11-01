#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solution(int n, string s2){
    map<string, int> m;

    for(int i=0; i <= s2.size() - n; i++){
        m[s2.substr(i,n)]++;
    }

    vector<pair<string, int> > vec(m.begin(), m.end());
    sort(vec.begin(), vec.end(), [](pair<string, int> a, pair<string, int> b){
        if(a.second > b.second) return a.second > b.second;
        return a.first < b.first;
    });

    /*for(auto c : vec){
        cout<<c.first<<" "<<c.second<<"\n";
    }*/

    cout<<vec[0].first<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);/**/

    int n;
    string s2; 
    while(cin>>n){
        cin>>s2;
        solution(n, s2); 
    }

    return 0;
}