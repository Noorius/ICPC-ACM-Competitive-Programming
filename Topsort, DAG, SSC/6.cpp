#include <bits/stdc++.h>

using namespace std;
int n, m, a, b;
vector<vector<int> > g(10e5+1);
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
        for(int u : g[v]){
            if(!used[u] and u!=p[v]){
                used[u] = true;
                d[u] = d[v] + 1;
                p[u] = v;
                q.push(u);
                if(u==b){
                    return;
                }
            }
        }
    }
}

int main(){
    cin>>n>>m>>a>>b; a--; b--;

    for(int i=0; i<m; i++){
        int st, en; cin>>st>>en; st--; en--;
        g[st].push_back(en);
        g[en].push_back(st);
    }

    bfs(a);

    if(d[b]==-INT_MAX){
        cout<<-1; return 0;
    }

    vector<int> ans;
    ans.push_back(b+1);

    for(int i = p[b]; i!=-1; i = p[i]){
        ans.push_back(i+1);
    }

    cout<<d[b]<<"\n";
    for(vector<int>::reverse_iterator it = ans.rbegin(); it!=ans.rend(); it++){
        cout<<(*it)<<" ";
    }
    
    return 0;
}