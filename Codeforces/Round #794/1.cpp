#include <bits/stdc++.h>
using namespace std;
#define inf (int)1e18

void solution(){
    int n;
	cin>>n;

    double a[51];

    double sumi = 0;
    for(int i = 0; i < n; i++){
        cin>>a[i];
        sumi += a[i];
    }


    for(int i = 0; i < n; i++){
        if(((sumi-a[i])/(n-1)) == a[i]){
            //cout<<a[i]<<"\n";
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
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