#include <bits/stdc++.h>

#define ll long long

using namespace std;

/*const ll N = 1000001;

vector<bool> prime(N, true);
int n;

void primes(){
    prime[0] = prime[1] = false;
    for (int i=2; i * i <= N; ++i)
        if (prime[i])
            if (i * 1ll * i <= N)
                for (int j=i*i; j<=N; j+=i)
                    prime[j] = false;
}*/


bool is_Prime(int n){
    if(n == 2) return true;
    if (n <= 1 || n % 2 == 0) return false;
 
    for (int i = 3; i * i <= n; i += 2){
        if (n % i == 0) return false;
    }
    return true;
}


int main(){
    //primes();

    ll n;
    cin>>n;

    for(int i=0; i<n; i++){
        ll t; cin>>t;
        ll root = sqrt(t);
        if(root * root == t){
            if(is_Prime(root)) cout<<"YES\n";
            else cout<<"NO\n";
        }else{
            cout<<"NO\n";
        }
    }

    
}