#include <bits/stdc++.h>

using namespace std;

bool check(string s){
    int i = 0, j = s.size()-1;
    while(j > i){
        if(s[i]!=s[j])
            return false;
        i++; j--;
    }
    return true;
}

void solution(){
    int n, k; 
    string s;
    cin>>n>>k>>s;

    
    vector<string> st;

    for(int i=0; i<n; i++){
        for(int j=1; j<=n-i; j++){
            string t = s.substr(i,j);
            if(!check(t)){
                st.push_back(t);
            }
        }   
    }

    set<string> seti(st.begin(),st.end());
    st = vector<string>(seti.begin(),seti.end());

    /*for(string c : st) cout<<c<<"\n";*/

    if(st.size() < k)
        cout<<-1<<"\n";
    else cout<<st[k-1]<<"\n";

    return;
}

int main(){
    /*ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);*/

    /*freopen("nopalindrome.in", "r", stdin);
    freopen("nopalindrome.out", "w", stdout);*/
    
    solution(); 

    return 0;
}