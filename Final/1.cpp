#include <bits/stdc++.h>

using namespace std;

long long q;

int to_int(char c){
    return c - '0';
}


void solution(){
    int n; cin>>n;
    
    vector<string> str1;
    map<string, int> mp;
    
    for(int i=0; i<n; i++){
        string s, t;
        cin>>s>>t;
    str1.push_back(s);
        mp.insert({t, i+1});
    }

    for(string c : str1){
        cout<<mp[c]<<"\n";
    }
    
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    
    solution();

    return 0;
}