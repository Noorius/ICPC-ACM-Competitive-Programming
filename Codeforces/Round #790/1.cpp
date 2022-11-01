#include <bits/stdc++.h>

using namespace std;

long long q;

int to_int(char c){
    return c - '0';
}


void solution(){
    string s;
    cin>>s;

    
    if(to_int(s[0])+to_int(s[1])+to_int(s[2]) == to_int(s[3])+to_int(s[4])+to_int(s[5]))
        cout<<"YES";
    else
        cout<<"NO";
    cout<<"\n";
    
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin>>q;

    while(q--){
        solution();
    }

    return 0;
}