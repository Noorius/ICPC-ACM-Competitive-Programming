#include <bits/stdc++.h>

using namespace std;


bool isPrime(int n){
    for(int j=2; j*j<=n; j++){
        if(n%j==0){
            return false;
        }
    }
    return true;
}

vector<long long> primeRange(int M, int N) {
        
    vector<long long> primes;
    
    if(M==1) M++;

    for(long long i=M; i<=N; i++){
        if(isPrime(i)){
            primes.push_back(i);
        }
    }
    
    return primes;
}

int main(){
    while(true){
        long long a, b;
        cin>>a>>b;
        vector<bool> was(b+1, false);

        vector<long long> ans = primeRange(a, b);
        //for (auto u : ans) cout << u << " ";
        cout<<ans.size()<<endl<<endl;
    }
}