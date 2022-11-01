#include <bits/stdc++.h>
using namespace std;
#define inf (int)1e18

vector<long long> tot(10010, 0);

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

void solution(){
    int n;
	cin>>n;

	long long H = 0;
	for(int i=1; i<=n; i++){
		for(int j=i; j<=n; j++){
			if(i==j){
				H += tot[i] * tot[j];
			}else{
				H += (tot[i] * tot[j]) * 2;
			}
		}
	}
	cout<<H<<"\n";

    cout<<phi(n)<<"\n";

}

int main() {

	for(int i=1; i<=10000; i++){
		for(int j=i; j<=10000; j++){
			tot[i] = phi(i);
		}
	}
	
    int q; cin>>q;

    while(q--){
        solution();
    }

    return 0;

}

