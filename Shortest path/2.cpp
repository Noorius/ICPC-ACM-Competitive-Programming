#include <bits/stdc++.h>
#define INF 1000000000;

using namespace std;

vector<vector<int> > g(1001,vector<int>());


int djiksta(int st, int en){
    vector<int> d(1001, 1000000000);
    d[st] = 0;

    priority_queue< pair<int,int> > q;
    q.push(make_pair(0, st));

    while(!q.empty()){
        int v = q.top().second;
        int cur_d = -q.top().first;
        q.pop();

        if(cur_d > d[v]) continue;

        for(int to : g[v]){
            if(d[v] + 1 < d[to]){
                d[to] = d[v] + 1;
                if(to==en){
                    return d[to];
                }
                q.push(make_pair(-d[to],to));
            }
        }
    }
    return d[en];
}

int main(){
    /*freopen("sumdist.in", "r", stdin);
    freopen("sumdist.out", "w", stdout);*/

    int n, m; cin>>n>>m;

    for(int i=0;i<m;i++){
        int st, en; cin>>st>>en; st--; en--;
        g[st].push_back(en);
        g[en].push_back(st);
    }

    int sum = 0;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            sum += djiksta(i,j);
        }
    }

    cout<<sum;
    
    
    return 0;
}