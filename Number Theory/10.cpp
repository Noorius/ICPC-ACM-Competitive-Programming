#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll t(int n){
    ll sum = 1;

    for(ll i=2; i*i<=n; i++){
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

    return sum;
}

int phi (int n) {
	int result = n;
	for (int i=2; i*i<=n; ++i)
		if (n % i == 0) {
			while (n % i == 0)
				n /= i;
			result -= result / i;
		}
	if (n > 1)
		result -= result / n;
	return result;
}

int main(){
    
    vector<ll> tot(10010, 0);
    
    for(int i=1; i<=10000; i++){
        tot[i] = phi(i);
    }


    ll n; 
    int s; cin>>s;
    for(int l = 0; l < s; l++){
        cin>>n;

        ll H = 0;
        for(int i=1; i<=n; i++){
            for(int j=i; j<=n; j++){
                if(i==j)
                    H += tot[i] * tot[j];
                else
                    H += tot[i] * tot[j] * 2;
            }
        }

        cout<<H<<"\n";
    }
}