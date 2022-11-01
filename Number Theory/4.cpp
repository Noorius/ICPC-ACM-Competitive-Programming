#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n; cin>>n;

    vector<pair<long long,int> > vec;

    for(long long i=2; i*i<=n; i++){
        int cnt = 0;
        if(n%i==0){
            while(n%i==0) {
                n/=i;
                cnt++;
            }
            vec.push_back(make_pair(i,cnt));
        }
    }

    long long sum = 1;

    for(int i=0; i<vec.size(); i++){
        sum*=(vec[i].second+1);
    }
    if(n>1){
        sum*=2;
    }

    cout<<sum-2;
}