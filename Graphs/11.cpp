#include <bits/stdc++.h>

using namespace std;

bool used[101];
int n, st, en;
vector<vector<int> > dp(101, vector<int>(101));
vector<int> d(101);

void bfs(int s){
    queue<int> q;
    q.push(s);
    used[s] = true;

    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(int i=0; i<n; i++){
            if(!used[i] and dp[v][i]==1){
                used[i] = true;
                d[i] = d[v] + 1;
                q.push(i);
                if(i==en){
                    return;
                }
            }
        }
    }
}

int main(){
    cin>>n;

    for(int i=0; i<n; i++){
        used[i] = false;
        for(int j=0; j<n; j++){
            cin>>dp[i][j];
        }
    }

    cin>>st>>en; st--; en--;
    bfs(st);
    

    if(!used[en]){
        cout<<-1;
    }else{
        cout<<d[en];
    }

    return 0;
}