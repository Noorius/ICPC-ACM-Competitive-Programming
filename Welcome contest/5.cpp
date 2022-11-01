#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin>>n;

    for(long long i=0, k; i<n; i++){
        cin>>k;
        /*if (k <= 3){cout<<"NO\n"; continue;}*/
        int cnt = 0;
        if(sqrt(k)!=int(sqrt(k))){cout<<"NO\n"; continue;}
        else{
            for(int j=2; j<=sqrt(k)+1; j++){
                if(cnt>1) break;
                if(k%j==0){
                    cnt++;
                }
            }
        }
        if(cnt==1){cout<<"YES\n";}else{cout<<"NO\n";}
    }
}