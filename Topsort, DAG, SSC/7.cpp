#include <bits/stdc++.h>

using namespace std;
int n, m, a, b;
vector<vector<int> > g(10e5+1);
vector<int> used(10e5+1); 

vector<int> d(10e5+1,-INT_MAX);
vector<int> p(10e5+1, 0);


int main(){
    string s; cin>>s;
    int n = s.size();

    queue<pair<pair<char,int>, int> > q;
    q.push(make_pair(make_pair(s[0],0),0));

    while(!q.empty()){
        pair<pair<char,int>, int> v = q.front();

        int to = s.rfind(v.first.first);
        int ind = v.first.second;

        q.pop();

        if(ind!=n-1){
            q.push({{s[to],to}, v.second+1});
            
            if(ind+1<n){
                q.push({{s[ind+1],ind+1}, v.second+1});
            }
            /*if(ind-1>=0){
                q.push({{s[ind-1],ind-1}, v.second+1});
            }*/

        }else{
            cout<<v.second; break;
        }
    }
    
    return 0;
}