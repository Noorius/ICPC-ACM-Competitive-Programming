#include <bits/stdc++.h>

using namespace std;


void count_sort(vector<int> &p, vector<int> &c){
    int n = p.size();
    vector<int> cnt(n);
    for(auto x : c){
        cnt[x]++;
    }
    vector<int> p_new(n);
    vector<int> pos(n);
    pos[0] = 0;
    for(int i = 1; i<n; i++){
        pos[i] = pos[i-1] + cnt[i-1];
    }
    for(auto x : p){
        int i = c[x];
        p_new[pos[i]] = x;
        pos[i]++;
    }
    p = p_new;
}

int toDec(string s, int b)
{
    int power = 1;
    int num = 0;

    for (int i = s.size() - 1; i >= 0; i--)
    {   
        num += (int)(s[i] - '0') * power;
        power *= b;
    }
 
    return num;
}

int main(){
    string s;
    cin>>s;

    int sub_l, base, modulo;
    cin>>sub_l>>base>>modulo;

    s+="$";
    int n = s.size();
    vector<int> p(n),c(n);
    {
        vector<pair<char, int> > a(n);
        for(int i = 0; i<n; i++) a[i] = make_pair(s[i],i);
        sort(a.begin(), a.end());

        for(int i=0; i<n; i++) p[i] = a[i].second;
        c[p[0]] = 0;
        for(int i = 1; i < n; i++){
            if(a[i].first == a[i-1].first)
                c[p[i]] = c[p[i-1]];
            else    
                c[p[i]] = c[p[i-1]] + 1;
        }
    }
    int k = 0;
    while((1<<k) < n){
        for(int i = 0; i<n; i++){
            p[i] = (p[i] - (1<<k)+n) %n;
        }
        count_sort(p, c);

        vector<int> c_new(n);
        c_new[p[0]] = 0;
        for(int i = 1; i < n; i++){
            pair<int,int> prev = make_pair(c[p[i-1]], c[(p[i-1]+(1<<k))%n]);
            pair<int,int> now = make_pair(c[p[i]], c[(p[i]+(1<<k))%n]);
            if(now == prev)
                c_new[p[i]] = c_new[p[i-1]];
            else    
                c_new[p[i]] = c_new[p[i-1]] + 1;
        }
        c = c_new;
        k++;
    }

    

    vector<int> lcp(n);
    k = 0;
    int sum = 0;
    unsigned long long cnt = p[0];
    for(int i = 0; i<n-1; i++){
        int pi = c[i];
        int j = p[pi - 1];
        while(s[i + k] == s[j + k]) k++;
        lcp[pi-1] = k;
        k = max(k-1, 0);

        if(p[pi]<s.length()-sub_l){
            sum+=(toDec(s.substr(p[pi],sub_l), base) % modulo);
        }

        //cout<<cnt<<" = "<<p[pi]<<" "<<s.substr(p[pi],n-p[pi])<<" - "<<lcp[pi]<<" "<<pi<<"\n";
        //cnt += s.substr(p[pi], n-p[pi]).size() - lcp[pi] - 1;
        //cout<<cnt<<" is cnt after\n";
    }

    
    /*for(int i = 1; i<p.size(); i++){
        //cout<<p[i]<<" "<<lcp[i-1]<<"\n";
        cnt += p[i] - lcp[i-1];
    } */

    //cout<<cnt; 
    cout<<sum;
    return 0;
}
/* 
ababba
7

0 6 
0 5
1 0
2 2
0 4
2 1
1 3
*/