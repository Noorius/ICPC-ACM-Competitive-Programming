#include <bits/stdc++.h>

using namespace std;

/*int toDec(string s, int b)
{
    int power = 1;
    int num = 0;

    for (int i = s.size() - 1; i >= 0; i--)
    {   
        num += (int)(s[i] - '0') * power;
        power *= b;
    }
 
    return num;
}*/

int main(){
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
    string s;
    cin>>s;
    long long k, b, m;
    cin>>k>>b>>m;
    
    long long power[300000+1];
    power[0] = 1;

    for(long long i = 1; i <k; i++){
        power[i] = power[i-1] * b;
    }

    long long sum = 0, out = 0;
    for(long long i=0; i < k; i++){
        long long first_sub = power[k-i-1] * (s[i]-'0');
        out += first_sub % m;
        sum += first_sub;
    }
    out = sum % m;

    for(long long i=k, f=0; i < s.size(); i++, f++){
        sum -= (power[k-1] * (s[f]-'0'));
        sum *= b;
        sum += (s[i]-'0') * power[0];
        out += sum % m; 

        //cout<<sum<<" "<<out<<endl;
    }

    cout<<out;
    return 0;
}