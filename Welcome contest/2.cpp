#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin>>n;

    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        int cnt = 0;
        stack<char> sq;
        stack<char> r;
        
        for(int j=0; j<s.size(); j++){
            if(s[j]==')' and !r.empty() and r.top()=='('){
                cnt++;
                r.pop();
            } 
            else if(s[j]=='(' or s[j]==')') r.push(s[j]);
        }
        for(int j=0; j<s.size(); j++){
            if(s[j]==']' and !sq.empty() and sq.top()=='['){
                cnt++;
                sq.pop();
            } 
            else if(s[j]=='[' or s[j]==']') sq.push(s[j]);
        }
        
        cout<<cnt<<endl;
    }
    return 0;
}