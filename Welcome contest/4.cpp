#include <bits/stdc++.h>

using namespace std;
vector<vector<int> > vec(201, vector<int>(201,1));
long long n, m;

//vector<bool> used(n,0);

/*void bfs(int s){
    queue<int> q;
    q.push (s);
    used[s] = true;
    p[s] = -1;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (int i=0; i<n; i++) {
            int to = a[v][i];
            if (!used[i] and to==1) {
                //p.push_back(i);
                used[i] = true;
                p[i] = v;
                d[i] = d[v] + 1;
                q.push(i);
                if(i==en-1)
                    return;
            }
        }
    }
}*/

int main(){
    cin>>n>>m;

    /*for(int i=0;i<n; i++){
        for(int j=0;j<n; j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<"\n";
    }*/

    for(int i=0;i<m;i++){
        int st, en;
        cin>>st>>en;
        vec[st-1][en-1] = 0;
        vec[en-1][st-1] = 0;
    }

    int cnt = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(vec[i][j]==1&&vec[j][i]==1&&vec[j][k]==1&&vec[k][j]==1&&vec[i][k]==1&&vec[k][i]==1){
                    cnt++;
                }
            }
        }
    }
    cout<<cnt;
    
    return 0;
}