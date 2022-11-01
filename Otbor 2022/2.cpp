#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n;
    cin>>n;
    
    vector<int> vec;

    int t = n, cnt = 0;

    while(n){
        t = n % 10;
        n /= 10;
        if(t!=0){
            if(cnt)
                vec.push_back(t*pow(10,cnt));
            else
                vec.push_back(t);
        }
        cnt++;
    }
    
    cout<<vec.size()<<endl;
    for(int c : vec){
        cout<<c<<" ";
    } cout<<"\n";
    
}

int main(){
    /*freopen("maze.in", "r", stdin);
    freopen("maze.out", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);*/

    int n; cin>>n;

    while(n--){
        solution();
    }

    
    
    return 0;
}