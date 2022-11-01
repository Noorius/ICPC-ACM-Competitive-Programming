#include <bits/stdc++.h>

//#define N 2*10e2
#define ll long long
using namespace std;

struct Line {
    int length;
    int start;
    int end;
    int type;
};

void solution(){
    int n, m; cin>>n>>m;

    char a[n][m];
    int b[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>a[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        int cnt = 0, maxi = INT_MIN, st = INT_MAX, en = n-1;
        for(int j = 0; j < m; j++){
            if(a[i][j] == '.') {
                cnt++;
                st = min(j, st);

                if(j==m-1 or a[i][j+1] != '.'){
                    maxi = max(maxi, cnt);
                    cnt = 0;
                    en = j;
                    st = INT_MAX;
                }
            }    
        }
        cout<<maxi<<" "<<st<<" "<<en<<"\n";
    }
}


int main(){
    // freopen("bad.in", "r", stdin);
    // freopen("bad.out", "w", stdout);

    int n; cin >> n;

    while(n--){
        solution();
    }

    return 0;
}