#include <bits/stdc++.h>
#define INF 1000000000;

using namespace std;

vector<vector<int> > g(1001,vector<int>(1001, 1000000000));


int main(){
    /*freopen("sumdist.in", "r", stdin);
    freopen("sumdist.out", "w", stdout);*/

    int n, m; cin>>n>>m;

    for(int i=0;i<m;i++){
        int st, en; cin>>st>>en; st--; en--;
        g[st][en] = 1;
        g[en][st] = 1;
    }

    for (int k=0; k<n; ++k)
	    for (int i=0; i<n; ++i)
		    for (int j=0; j<n; ++j)
			    g[i][j] = min (g[i][j], g[i][k] + g[k][j]);

    int sum = 0;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            sum += g[i][j];
        }
    }

    cout<<sum;
    
    
    return 0;
}