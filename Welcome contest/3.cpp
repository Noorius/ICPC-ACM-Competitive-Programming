#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, q;
    cin>>n>>q;
    
    vector<int> vec(10e5+1, 0);
    long long ones = 0, zeroes = 0;
    for(int i=0, k; i<n; i++){
        cin>>k;
        vec[i]=k;
        if(vec[i]==1) ones++;
        else zeroes++;
    }

    int op, val;
    for(int i=0; i<q; i++){
        cin>>op>>val;
        if(op==1){
            if(vec[val-1]==0){
                vec[val-1]=1; zeroes--; ones++;
            }else{
                vec[val-1]=0; zeroes++; ones--;
            }
        }
        if(op==2){
            if(val>ones){
                cout<<0<<"\n";
            }else cout<<1<<"\n";
        }
    }

    return 0;
}