#include <bits/stdc++.h>

using namespace std;

struct edge {
	int a, b, cost;
};

const int inf = -1000000000;
vector<edge> g;
vector<int> d(2001, inf);
vector<int> p(2001, -1);


int main(){
    /*freopen("maze.in", "r", stdin);
    freopen("maze.out", "w", stdout);*/

    int n, m; cin>>n>>m;

    for(int i=0;i<m;i++){
        int st, en, w; cin>>st>>en>>w; st--; en--; 
        edge e; e.a = st, e.b = en, e.cost = w; 
        g.push_back(e); 
    }

    d[0] = 0;
    int x;

    for(int i = 0; i < n; i++){
        x = -1;
        for(int j = 0; j < m; j++){
            if(d[g[j].a] > inf){
                if(d[g[j].b] < d[g[j].a] + g[j].cost){
                    d[g[j].b] = d[g[j].a] + g[j].cost; 
                    p[g[j].b] = g[j].a;
                    x = g[j].b; 
                }
            }
        }
    }


    
    vector<int> path;
    for (int cur=n-1; ; cur=p[cur]) {
        path.push_back (cur);
        if (path.size() > n)  break;
    }

    if(d[n-1]==inf){
        cout<<":(";
    }else if(x!=-1 and (path.size() > n or path.back()!=0 or path.front()!=n-1)){
        cout<<":)";
    }else{
        cout<<d[n-1]<<"\n";
    }
    
    
    return 0;
}