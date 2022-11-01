#include <bits/stdc++.h>

using namespace std; 
int n; 
string st; 
//vector<vector<int> > g(100001, vector<int>(100001, 1)); 
vector<int> used(10e5+1); 

vector<int> d(10e5+1,-INT_MAX); 
vector<int> p(10e5+1, 0); 

void bfs(int s){ 
    queue<int> q; 
    q.push(s); 
    used[s] = true; 
    p[s] = -1; 
    d[s] = 0; 

    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(int i = v-1; i < n; i++){
            if(!used[i] and i!=p[v] and (st[v]==st[i] or v+1==i or v-1==i)){
                used[i] = true;
                d[i] = d[v] + 1;
                p[i] = v;
                q.push(i);
                if(i==n-1){
                    cout<<d[n-1];
                    exit(0);
                }
            }
        }
    }
}

int main(){
    cin>>st;

    n = st.length();

    bfs(0);

    if(d[n-1]==-INT_MAX){
        cout<<-1; return 0;
    }

    cout<<d[n-1]<<"\n";
    
    return 0;
}