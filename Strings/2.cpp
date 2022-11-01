#include <bits/stdc++.h>

using namespace std;

int p = 31;

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

void solution(string s){
    vector<int> pi = pf(s);

    /*for(int c : pi){
        cout<<c<<" ";
    }
    cout<<"\n";*/

    int n = s.length();
    int t = n - pi[n-1];

    if(n % t != 0)
        cout<<1<<"\n";
    else{
        cout<< n / t <<"\n";
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);/**/

    string s;
    while(cin>>s){
       solution(s); 
    }

    return 0;
}