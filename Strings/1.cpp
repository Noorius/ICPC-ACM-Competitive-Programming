#include <bits/stdc++.h>

using namespace std;

int p = 31;

int a_hash(string s){
    int h = 0;
    for(int i = 0; i < s.length(); i++){
        h = h * p + (s[i] - 'a' + 1);
    }
    return h;
}

void solution(){
    string s, t;
    cin>>s>>t;

    int n = s.size();
    int m = t.size();

    if(m >= n){
        cout<<0<<"\n";
        return;
    }

    vector<int> ans;
    int Ht = a_hash(t);
    int H = a_hash(s.substr(0, m));

    int pn = 1;
    for(int i = 0; i < m-1; i++){
        pn = pn * p;
    }

    for(int i = 0; i <= n-m; i++){
        if(Ht==H){
            ans.push_back(i);
        }
        if(i!=m-n){
            H = (H - (s[i]-'a'+1) * pn) * p + (s[i+m] - 'a' + 1);
        }
    }

    for(int c : ans){
        cout<<c<<" ";
    }

    return; 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);/**/

    solution();
    

    return 0;
}