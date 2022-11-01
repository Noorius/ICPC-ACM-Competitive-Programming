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

    int a, b, ab, ba; 
    a = b = ab = ba = 0;

    for(int i = 0; i < s.length()-1; i++){
        string st;
        st.push_back(s[i]);
        st.push_back(s[i+1]);

        if(s[i]=='A') a++;
        if(s[i]=='B') b++;

        if(st == "AB") ab++;
        if(st == "BA") ba++;
    }
    if(s[s.size()-1]=='A') a++;
    if(s[s.size()-1]=='B') b++;

    //cout<<a<<" "<<b<<" "<<ab<<" "<<ba<<"\n";

    if(a+b+(2*ab)+(2*ba) < s.length()){
        cout<<"NO\n"; return;
    }
    if(str[0]>a or str[1]>b or str[2]>ab or str[3]>ba){
        cout<<"NO\n"; return;
    }/**/

    cout<<"YES\n";

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