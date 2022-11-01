#include <bits/stdc++.h>

using namespace std;

long long q;



void solution(){
    int n;
    cin>>n;

    int a[n];
    
    int mini = INT_MAX;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]<mini){
            mini = a[i];
        }
    }
    int sum = 0;

    for(int i=0; i<n; i++){
        sum += a[i] - mini;
    }

    cout<<sum<<"\n";

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