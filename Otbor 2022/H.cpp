#include <bits/stdc++.h>

using namespace std;


void solution(){
    int n;
    cin>>n;

    vector<int> vec(n);
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }

    int A = 0, B = 0, cnt = 0;

    int tot_A = 0, tot_B = 0;

    for(int i=0, j=n-1; i<=j; cnt++){

        if(cnt%2==0){
            A = 0;
            while(A<=B && i<=j){
                A += vec[i++];
            }
            tot_A += A;  
        }
        else{
            B = 0;
            while(B<=A && i<=j){
                B += vec[j--];
            }
            tot_B += B;  
        }
    }

    cout<<cnt<<" "<<tot_A<<" "<<tot_B<<"\n";
}

int main(){
    /*freopen("maze.in", "r", stdin);
    freopen("maze.out", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);*/

    int n; cin>>n;

    while(n--){
        solution();
    }

    
    
    return 0;
}