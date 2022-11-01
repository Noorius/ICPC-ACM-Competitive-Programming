#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin>>n;
    
    for(int j=0; j<n; j++){
        bool r=false,g=false,b=false;
        string s; cin>>s;
        int i;
        for(i=0; i<s.length(); i++){
            if(s[i]=='r') r = true;
            if(s[i]=='g') g = true;
            if(s[i]=='b') b = true;

            if(s[i]=='R' && !r) {
                cout<<"NO\n"; break;
            }
            if(s[i]=='G' and g==false) {
                cout<<"NO\n"; break;
            }
            if(s[i]=='B' and b==false) {
                cout<<"NO\n"; break;
            }
        }
        if(i==s.length()){
            cout<<"YES\n";
        }
    }

    
    return 0;
}