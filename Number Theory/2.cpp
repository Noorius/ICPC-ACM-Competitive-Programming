#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n; cin>>n;

    vector<long long> vec;

    for(long long i=2; i*i<=n; i++){
        if(n%i==0){
            while(n%i==0) {
                n/=i;
                vec.push_back(i);
            }
        }
    }

    for(int i=0; i<vec.size(); i++){
        cout<<vec[i];
        
        if(i+1!=vec.size() or n>1)
            cout<<"*";
        
    }

    if(n>1){
        cout<<n;
    }
}