#include <bits/stdc++.h>

using namespace std;



void solution(){
    int n, m, ord; cin>>n>>m>>ord;
    
    vector<int> ans;
    int i = n;
    while(i<=m){
        if(sqrt(i)==(int)sqrt(i))
            ans.push_back(i);
        i++;
    }
    if(ord==1){
        for(int i = 0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
    }else{
        for(int i = ans.size()-1; i>=0; i--){
            cout<<ans[i]<<" ";
        }
    }

}

int main(){
    /*ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);*/

    /*freopen("loop.in", "r", stdin);
    freopen("loop.out", "w", stdout);*/
    
    solution(); 

    return 0;
}