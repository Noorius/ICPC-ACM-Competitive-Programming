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

void solution(int n, string s){

    {
        vector<char> t;
        t.push_back('|');
        for(char c : s){
            t.push_back(c);
            t.push_back('|');
        }
        s = string(t.begin(), t.end());
        n = s.size();
    }    

    cout<<s<<" "<<s.size()<<endl;

    vector<int> d1 (n);
    int l=0, r=-1;
    for (int i=0; i<n; ++i) {
        int k = i>r ? 1 : min (d1[l+r-i], r-i+1);
        while (i+k < n && i-k >= 0 && s[i+k] == s[i-k])  ++k;
        d1[i] = k;
        if (i+k-1 > r)
            l = i-k+1,  r = i+k-1;
    }

    for(int c : d1){
        cout<<c/2<<" ";
    }

    /*
    vector<int> ro(n, 1);
    int left = 0, right = 0;
    for(int i=1; i<n; ++i){
        int L, R;
        if(i > right){
            L = i, R = i;
        } else{
            assert((right + left)/2 < i);
            int mi = right + left - i;
            L = i - ro[mi] + 1;
            R = i + ro[mi] - 1;

            if(R > right){
                int d = R - right;
                R -= d;
                L += d;
            }
        }
        while(L-1 >= 0 and R+1<n and ro[L-1] == ro[R+1]){
            L--; R++;
        }
        ro[i] = R - L + 1;
        if(R > right){
            left = L; right = R;
        }
        
    }*/

    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);/**/

    int n;
    string s2; 
    cin>>n>>s2;
    solution(n, s2); 

    return 0;
}