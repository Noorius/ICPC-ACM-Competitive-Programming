#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> pf(string s){
    ll n = (ll) s.length();
	vector<ll> pi (n);
	for (ll i=1; i<n; ++i) {
		ll j = pi[i-1];
		while (j > 0 && s[i] != s[j])
			j = pi[j-1];
		if (s[i] == s[j])  ++j;
		pi[i] = j;
	}
	return pi;
}

vector<ll> z_imp(string s) {
	ll n = s.length();
    vector<ll> z(n);
	for(int i=0; i <= n; ++i){
		z[i] = 0;
	}
	for (ll i=1, l=0, r=0; i<n; ++i) {
		if (i <= r)
			z[i] = min(r-i+1, z[i-l]);
		while (i+z[i] < n && s[z[i]] == s[i+z[i]])
			++z[i];
		if (i+z[i]-1 > r)
			l = i, r = i+z[i]-1;
	}
    return z;
}


const int p = 31;

vector<long long> p_pow ((int)10e6);

void cal_pow(){
    p_pow[0] = 1;
    for (size_t i=1; i<p_pow.size(); ++i)
        p_pow[i] = p_pow[i-1] * p;
}

void solution(ll n, string org){
    string s = org;
    reverse(s.begin(), s.end());
    
    vector<ll> h (s.length());
    for (size_t i=0; i<s.length(); ++i){
        h[i] = (s[i] - 'a' + 1) * p_pow[i];
        if (i)  h[i] += h[i-1];
        
    }

    for (int i=s.length()-1; i>=0; --i){
        cout<<h[i]<<"\n";
    }
    
}

int main(){
    /*ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);*/

    cal_pow();

    ll n;
    string s; 
    cin>>n>>s;
    solution(n, s); 

    return 0;
}