#include <bits/stdc++.h>

using namespace std;

double cost(int l, int r){
    return sqrt(r - l);
}

int main()
{
    /*freopen("lepus.in", "r", stdin);
    freopen("lepus.out", "w", stdout);*/
    string s;
    while(cin>>s){
        s = "#" + s;
        double dp[s.length()+1];
        
        for(int i=0; i<s.length();i++){
            dp[i] = 100000;
        }

        dp[0] = 0;
        for(int i=1; i<s.length();i++){
            if(s[i]=='X'){
                for(int j=0; j<i;j++){
                    dp[i] = min(cost(j,i) + dp[j], dp[i]);
                }
            }
            else
                dp[i] = dp[i-1];
        }

    
        printf("%.4f\n",dp[s.length()-1]);
    }

    return 0;
}