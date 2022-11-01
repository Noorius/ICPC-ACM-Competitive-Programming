#include <bits/stdc++.h>

using namespace std;

string s = "abcdefghijklmnopqrstuvwxyz";

void solution(){
    long long n, c; cin>>n>>c;
    string ans = "";
    
    while(c){
        int end = c % 10;
        c /= 10;
        if(end==0){
            int uni = c % 100;
            c /= 100;
            ans.push_back(s[uni - 1]);
        }else{
            ans.push_back(s[end - 1]);
        }
    }

    reverse(ans.begin(),ans.end());
    cout<<ans<<"\n";
    
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