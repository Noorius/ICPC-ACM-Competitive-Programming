#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n;
    cin>>n;
    string s1, s2; cin>>s1; cin>>s2;

    for(int i=0; i<n; i++){
        if(s1[i]!=s2[i]){
            if((s1[i]=='G' && s2[i]=='B') || (s1[i]=='B' && s2[i]=='G')){
                continue;
            }else{
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES\n";
}

int main(){
    /*freopen("maze.in", "r", stdin);
    freopen("maze.out", "w", stdout);*/

    int n; cin>>n;

    while(n--){
        solution();
    }

    
    
    return 0;
}