#include <bits/stdc++.h>

using namespace std;

//int a[100001];
vector<int> a(100001), low, high; 

int main(){
    int n;
    cin>>n;

    int A = -1;

    for(int i=0; i<=2*n; i++){
        if(i==0) A = a[i];
        else cin>>a[i-1];
    }
    sort(a.begin(), a.begin()+2*n);

    for(int i=0; i<n; i++){
        
    }

    
    
}