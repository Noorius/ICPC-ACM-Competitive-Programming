#include <bits/stdc++.h>

using namespace std;

long long q;



void solution(){
    int n, m;
    cin>>n>>m;

    string a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int mini = INT_MAX;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int temp = 0;
            for(int k=0; k<m; k++){
                temp += abs(a[i][k] - a[j][k]);
            }
            if(temp < mini){
                mini = temp;
            }
        }
    }

    cout<<mini<<"\n";

    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin>>q;

    while(q--){
        solution();
    }

    return 0;
}