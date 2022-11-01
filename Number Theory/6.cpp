#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n; 
    
    while(true) {
        cin>>n;

        if(n==0) return 0;

        long long sum = 1;

        for(long long i=2; i*i<=n; i++){
            int cnt = 0;
            if(n%i==0){
                while(n%i==0) {
                    n/=i;
                    cnt++;
                }
                sum = sum * (pow(i, cnt) - pow(i, cnt-1));
            }
        }

        if(n>1){
            sum *= (n - 1);
        }

        cout<<sum<<endl;

    }
}