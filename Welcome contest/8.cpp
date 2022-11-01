#include <bits/stdc++.h>

using namespace std;

int a[501], b[501];

int main(){
    int n, k,cnt = 0;
    cin>>n>>k;

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    b[0] = a[0];
    for(int i=1; i<n; i++){
        b[i] = a[i];
        int curr_sum = b[i-1]+b[i];
        
        if(curr_sum < k){
            b[i] += k - curr_sum;
            cnt += k - curr_sum;
        }
    }

    cout<<cnt<<"\n";
    for(int i=0; i<n; i++){
        cout<<b[i]<<" ";
    }
    
}