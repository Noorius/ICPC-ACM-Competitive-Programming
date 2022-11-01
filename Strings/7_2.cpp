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

void solution(ll n, string s){
    string s1 = s;
    reverse(s1.begin(), s1.end());

    vector<ll> pr = pf(s1+"#"+s);
    
    cout<<n - pr.back()<<"\n";

    /*cout<<s1<<"#"<<s<<"\n";
    for(ll c : pr){
        cout<<c<<" ";
    }*/
}

int main(){
    /*ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);*/

    ll n;
    string s2; 
    cin>>n>>s2;
    solution(n, s2); 

    return 0;
}