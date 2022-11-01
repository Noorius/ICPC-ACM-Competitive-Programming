#include <bits/stdc++.h>

//#define N 2*10e2
#define ll long long
using namespace std;

ll n, k;
vector<int> vec(10001, 0);

bool check(int x){
    int c = 1;
    int l_c = vec[0];
    for(int i = 1; i<n; i++){
        if(vec[i] - l_c >= x){
            c++;
            l_c = vec[i];
        }
    }
    return c >= k;
}


int main(){
    cin>>n>>k; 

    for(int i=0; i<n; i++){
        cin>>vec[i];
    }

    vector<bool> ans(n,0);

    for(int i=0; i<n; i++){
        ans[i] = check(vec[i]);
    }

    
    return 0;
}