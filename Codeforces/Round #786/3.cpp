#include <bits/stdc++.h>

using namespace std;

long long q, x, y;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin>>q;

    while(q--){
        string s, t;
        cin>>s>>t;
        if(t.find('a')!=string::npos and t.length()==1){
            cout<<1<<"\n";
        }else if(t.find('a')!=string::npos){
            cout<<-1<<"\n";
        }else{
            cout<<pow(2,s.length())<<"\n";
        }
    }
    
    

    return 0;
}