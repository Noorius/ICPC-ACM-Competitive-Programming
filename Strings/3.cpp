#include <bits/stdc++.h>
#define ll long long
using namespace std;

int p = 31;

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

vector<int> pf(string s){

    int n = (int) s.length();
	vector<int> pi (n);
	for (int i=1; i<n; ++i) {
		int j = pi[i-1];
		while (j > 0 && s[i] != s[j])
			j = pi[j-1];
		if (s[i] == s[j])  ++j;
		pi[i] = j;
	}
	return pi;

}

int bs(int l, int r, vector<int>& pr){
    
    if(l>r) return 0;
    int m = l + (r-l)/2;
    if(pr[m] == 0){
        return m;
    }
    return max(bs(l, m-1, pr),bs(m+1, r, pr));

}

void solution(){
    int n; cin>>n;
    string s; cin>>s;
    
    
    //cout<<"\n"<<bs(0,n-1,pr);

    int temp2 = n;
    while(temp2--){
        string temp = s;
        temp.erase(temp2, 1);
            
        vector<ll> pr = z_imp(temp); //pf(temp)

        for(ll c : pr){
            cout<<c<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);/**/

    int q; cin>>q;
    while(q--){
       solution(); 
    }

    return 0;
}