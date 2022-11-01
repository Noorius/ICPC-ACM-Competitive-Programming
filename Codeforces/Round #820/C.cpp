#include <bits/stdc++.h>

using namespace std;


void solution(){
    string s; cin>>s;
    
    vector<pair<char, int> > vec;
    for(int i=0; i<s.size(); i++){
        vec.push_back(make_pair(s[i], i + 1));
    }
    sort(vec.begin(), vec.end());

    for(auto c : vec){
        cout<<c.first<<" "<<c.second<<endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);/**/

    int n;
    cin>>n;

    while(n--){
       solution();  
    }
    

    return 0;
}