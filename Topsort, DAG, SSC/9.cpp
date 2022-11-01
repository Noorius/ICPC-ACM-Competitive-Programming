#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    for(int k = 0; k<n; k++){
        int v_s,i_s; cin>>i_s>>v_s; 
        vector<vector<char> > g(v_s, vector<char>(i_s, '#')); 
        v_s--; i_s--;

        queue< pair<int,int> > q;

        for(int i=0; i<=v_s; i++){
            for(int j=0; j<=i_s; j++){
                cin>>g[i][j];
                if(g[i][j]=='@'){
                    q.push(make_pair(i, j));
                }
            }
        }
        
        int sum = 0;

        while(!q.empty()){
            pair<int,int> v = q.front();
            int vec = v.first;
            int ind = v.second;

            q.pop();

            if(vec-1>=0 and g[vec-1][ind]!='#'){
                q.push(make_pair(vec-1,ind));
            }
            if(vec+1<=v_s and g[vec+1][ind]!='#'){
                q.push(make_pair(vec+1,ind));
            }
            if(ind-1>=0 and g[vec][ind-1]!='#'){
                q.push(make_pair(vec,ind-1));
            }
            if(ind+1<=i_s and g[vec][ind+1]!='#'){
                q.push(make_pair(vec,ind+1));
            }

            if(g[vec][ind]!='#'){
                //cout<<vec<<" "<<ind<<"\n";
                sum++;
            }

            g[vec][ind] = '#';
        }
        cout<<"Case "<<k+1<<": "<<sum<<"\n";

    }

    
    return 0;
}