#include <bits/stdc++.h>

using namespace std;

#define ll long long


struct edge {
	int a, b, cost;
};

int n, m, s;
const ll INF = 9000000000000000000;

vector<bool> valid(2001);

vector<edge> e;


void solution(){
    vector<ll> d (n, INF);
    vector<int> p (n, -1);
	d[s] = 0;
    int x;
	for (int i=0; i<n; ++i){
        x = -1;
		for (int j=0; j<m; ++j){
            if (d[e[j].a] < INF){
                if(d[e[j].b] > d[e[j].a] + e[j].cost) {
                    d[e[j].b] = max(-INF, d[e[j].a] + e[j].cost);
                    p[e[j].b] = e[j].a;
                    x = e[j].b;
                }
            }
        }
    }
    

    /*for(int i=0; i<n; i++){
        cout<<d[i]<<"\n";
    }*/

    if (x != -1){
        int y = x;
		for (int i=0; i<n; ++i)
			y = p[y];
 
		vector<int> path;
		for (int cur=y; ; cur=p[cur]) {
			path.push_back (cur);
            valid[cur] = true;
			if (cur == y && path.size() > 1)  break;
		}
    }

    for(int i=0; i<n; i++){
        if(valid[i]){
            cout<<"-\n";
        }else if(d[i]==INF){
            cout<<"*\n";
        }else{
            cout<<d[i]<<"\n";
        }
    }
}

int main(){
    /*ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);*/

    /*freopen("path.in", "r", stdin);
    freopen("path.out", "w", stdout);*/
    
    cin>>n>>m>>s; s--;
    int st1, st2, w;
    for(int i=0; i<m; i++){
        cin>>st1>>st2>>w; st1--; st2--;
        edge edg = {st1, st2, w};
        e.push_back(edg);
    }

    solution();
     
    return 0;
}

















/*vector < vector < pair<int,int> > > g (2001);
vector<int> d(2001, INF);
vector<bool> u(2001, false);


void Djikstra(){
    for(int i = 0; i < n; i++){
        int v = -1;
        for(int j = 0; j < n; j++){
            if(!u[j] && (v==-1 or d[j]<d[v])){
                v = j;
            }
        }

        if(d[v] == INF){
            break;
        }

        u[v] = true;

        for(int j = 0; j < g[v].size(); j++){
            int to = g[v][j].first,
                len = g[v][j].second;
            if(d[v] + len < d[to]){
                d[to] = d[v] + len;
            }
        }
    }
}*/