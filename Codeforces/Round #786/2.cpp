#include <bits/stdc++.h>

using namespace std;

int q, x, y;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin>>q;

    while(q--){
        string s;
        cin>>s;
        if(s[0]<s[1]){
            cout<<((s[0]-'a') * 25) + (s[1] - 'a')<<"\n";
        }else{
            cout<<((s[0]-'a') * 25) + (s[1] - 'a' + 1)<<"\n";
        }
    }
    
    

    return 0;
}