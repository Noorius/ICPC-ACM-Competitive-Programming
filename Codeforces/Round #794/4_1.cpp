#include <bits/stdc++.h>
using namespace std;
#define inf (int)1e18


void solution(){
    vector<int> str(4, 0);
    string s;

    for(int i = 0; i < 4; i++){
        cin>>str[i];
    }

    cin>>s;

    vector<string> vec;
    for(int i = 1, j = 0; i < s.length(); i++){
        if(s[i-1]==s[i]){
            vec.push_back(s.substr(j,i-j));
            j = i;
        }
    }

    for(string c : vec){
        cout<<c<<"\n";
    }

    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	
    int q; cin>>q;

    while(q--){
        solution();
    }

    return 0;

}