#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll pi [1000100];

ll cmp(ll p1, ll p2, string s){
	ll n = s.length();

	if(p1 > n or p2>n) return 0;
	
	ll t = 0;
	if(n-p1 < n-p2) t = n-p1; else t = n-p2;

	ll j = 0;
	while(j<=t and s[p1+j-1]==s[p2+j-1]) j++;

	return j;
}

void pf(string s){
    ll n = (ll) s.length();

	ll r = 0, l = 0;

	pi[1] = 0;
    
	for (ll i=2; i<=n; ++i) { 
		pi[i] = 0;
		if(i > r){ 
			pi[i] = cmp(1, i, s);
			if(pi[i]>0){
				r = i + pi[i] - 1;
				l = i;
			}
		}else{
			ll  k = i - l + 1;
			if(pi[k] < r - i + 1) pi[i] = pi[k];
			else{
				pi[i] = r - i + 1;
				l = i;
				ll q = cmp(r-i + 2, r + 1, s);

				if(q>0){
					pi[i] += q;
					r = i + pi[i] - 1;
				}
			}
		}
	}
}



/*void z_imp(string s) {
	ll n = s.length();
	for(int i=0; i <= n; ++i){
		z[i] = 0;
	}
	for (ll i=1, l=0, r=0; i<n; ++i) {
		if (i <= r)
			z[i] = min (r-i+1, z[i-l]);
		while (i+z[i] < n && s[z[i]] == s[i+z[i]])
			++z[i];
		if (i+z[i]-1 > r)
			l = i, r = i+z[i]-1;
	}
}

void z_naive(string s){
	int n = s.size();

    z[0] = 0;
    for(int i=1; i < n; i++){
        while(z[i]+i < n and s[z[i]+i] == s[z[i]])
            z[i]++;
    }
}*/

void solution(){
    string s; 
	getline(cin, s);
    
	pf(s);

    for(ll i = 1; i <= s.length(); i++){
        cout<<pi[i]<<" ";
    }
    cout<<"\n";


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);/**/

    
    solution(); 
    

    return 0;
}