#include <bits/stdc++.h>

using namespace std;

int n;
//vector<pair<int, int> > vec(500001, pair<int,int>(0,0));
int a[500001];
vector<int> sim;

int sumi(int n){
    int sum = 0;
    for(int i = 1; i < n; i++){
        sum += i;
    }
    return sum;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    

    for(int i=1; i<=n; i++){
        cin>>a[i];
        if(a[i]==i){
          sim.push_back(a[i]);  
        }
    }

    int sum = 0; //sumi(sim.size());

    for(int i=1; i<=n; i++){
        if(a[i]<i){
            continue;
        }
        if((a[i] * a[a[i]]) % (i * a[i]) == 0 and a[i]!=i){
            sum++;
            cout<<"First "<<a[i]<<" "<<a[a[i]]<<"\n";
        }
        for(int c : sim){
            if((a[i]*c)%(i*c) == 0 and a[i]>c){
                sum++;
                cout<<"Second "<<a[i]<<" "<<c<<"\n";
            }
        }
    }

    cout<<sum;
    
    return 0;
}