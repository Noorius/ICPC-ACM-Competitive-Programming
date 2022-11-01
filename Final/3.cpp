#include <bits/stdc++.h>
using namespace std;
#define inf (int)1e18

void solution(){
    int n,m;
	cin>>n>>m;

    vector<int> cost(1002);
	vector < vector < pair<int,int> > > g (1002);

    for(int i = 0; i < m; ++i){
        int st, en, w;
        cin >> st >> en >> w; st--; en--;
        g[st].push_back({w, en});
        //g[en].push_back({w, st});
    }

    for(int i=0;i<n;i++){
        cin>>cost[i];
    }

    int st, en; cin>>st>>en; st--; en--;
    
	vector<int> d (1002, inf);

	d[st] = 0;

	set<pair<int,int> >q;
    q.insert(make_pair(d[st],st));

    while(!q.empty()){
        int v = q.begin()->second;
        q.erase(q.begin());

        for(int i = 0; i < g[v].size(); ++i){
            int to = g[v][i].second;
            int len = g[v][i].first;

            if(len > cost[to])
                len -= cost[to];

            if(d[v] + len < d[to]){
                q.erase(make_pair(d[to],to));
                d[to] = d[v] + len;
                q.insert(make_pair(d[to],to));
            }
        }
    }

    /*for(int i=0; i<n; ++i) {
        cout<<d[i]<<" ";
    }*/

    if(d[en] >= inf){
        cout<<-1<<"\n";
    }else{
        cout<<d[en] * 10 <<"\n";
    }

}

int main() {
	
    int q; cin>>q;

    while(q--){
        solution();
    }

    return 0;

}