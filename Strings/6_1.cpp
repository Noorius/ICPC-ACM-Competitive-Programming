#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int p = 31;

vector<long long> p_pow ((int)10e6);

void cal_pow(){
    p_pow[0] = 1;
    for (size_t i=1; i<p_pow.size(); ++i)
        p_pow[i] = p_pow[i-1] * p;
}


void solution(int l, string s){

    int n = (int) s.length();

    vector<long long> h (s.length());
    for (size_t i=0; i<s.length(); ++i)
    {
        h[i] = (s[i] - 'a' + 1) * p_pow[i];
        if (i)  h[i] += h[i-1];
    }

    //vector<pair<long long, int> > hs (n-l+1);

    map<ll,pair<ll,ll> > mp;

	for (int i=0; i<n-l+1; ++i)
	{
		long long cur_h = h[i+l-1];
		if (i)  cur_h -= h[i-1];
		
		cur_h *= p_pow[n-i-1];
		//hs[i] = {cur_h, i};
        mp[cur_h].first++;
        mp[cur_h].second = i;
	}

    vector<pair<ll, ll> > vec;
    map<ll,pair<ll,ll> >::iterator it;
    for(it=mp.begin(); it!=mp.end(); it++){
        vec.push_back({it->second.first, it->second.second});
    }

    sort(vec.begin(),vec.end());
    cout<<s.substr(vec.back().second, l)<<"\n";

	/*sort (hs.begin(), hs.end());

    for(auto c : hs){
        cout<<c.first<<" "<<c.second<<endl;
    }*/


}

int main(){
    /*ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);*/

    cal_pow();

    int n;
    string s2; 
    while(cin>>n){
        cin>>s2;
        solution(n, s2); 
    }

    return 0;
}