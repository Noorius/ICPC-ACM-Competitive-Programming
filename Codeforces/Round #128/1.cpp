#include <bits/stdc++.h>

using namespace std;

long long q;

void solution(){
    //int l1, r1, l2, r2;
    //cin>>l1>>r1>>l2>>r2;

    pair<int, int> p1, p2;
    cin>>p1.first>>p1.second>>p2.first>>p2.second;

    if(p1.first > p2.first){
        swap(p1.first, p2.first);
        swap(p1.second, p2.second);
    }

    if(p1.second >= p2.first){
        cout<<p2.first<<"\n";
    }else{
        cout<<p2.first + p1.first <<"\n";
    }
    
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