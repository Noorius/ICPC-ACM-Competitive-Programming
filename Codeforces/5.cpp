#include <bits/stdc++.h>

using namespace std;

bool check(int a[], int n){
    for(int i=2; i<n; i++){
        if(a[i]==a[i-1]+a[i-2])
            return false;
    }
    return true;
}

void print(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    int n; cin>>n;

    /*int dp[51];
    dp[0] = 1;
    dp[1] = 2;
    for(int i=2; i<n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }*/

    for(int i=0; i<n; i++){
        int num; cin>>num;
        int a[num]; 
        for(int j=0; j<num; j++){
            a[j] = j+1;
        }
        for(int j=0; j<num;){
            if(check(a,num)){
                print(a,num);
                j++;
            }
            next_permutation(a,a+num);
        }
    }

    
    return 0;
}