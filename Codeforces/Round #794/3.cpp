#include <bits/stdc++.h>
using namespace std;
#define inf (int)1e18


void solution(){
    int n;
	cin>>n;

    int a[100100];

    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    if(n%2!=0){
        cout<<"NO\n"; return;
    }

    sort(a, a+n);

    vector<int> b;

    for(int i = 0; i < n/2; i++){
        b.push_back(a[i]);
        b.push_back(a[n/2+i]);
    }

    for(int i = 1; i<b.size()-1; i++){
        if((b[i-1]<b[i] and b[i]>b[i+1]) or (b[i-1]>b[i] and b[i]<b[i+1])){
            continue;
        }else{
            cout<<"NO\n"; return;
        }
    }

    cout<<"YES\n";
    for(int i = 0; i<b.size(); i++){
        cout<<b[i]<<" ";
    }
    cout<<"\n";

    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	
    int q; cin>>q;

    while(q--){
        solution();
    }

    return 0;

}