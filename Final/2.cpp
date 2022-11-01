#include <bits/stdc++.h>

using namespace std;

long long q;

int to_int(char c){
    return c - '0';
}


void solution(){
    int n, m; cin>>n>>m;

    deque<int> a, b;
    
    for(int i=0; i<n; i++){
        int t; cin>>t;
        a.push_back(t);
    }

    for(int i=0; i<m; i++){
        int t; cin>>t;
        b.push_back(t);
    }

    int cnt = 0;
    while(true){
        if(a.front() == b.front()){
            //cout<<a.front()<<" "<<b.front()<<endl;
            a.pop_front(); b.pop_front();
            cnt++;
            if(a.empty() or b.empty()) break;
        }

        if(a.front() < b.front()){
            int temp = a.front(); a.pop_front();
            a.front()+=temp;
        }

        if(a.front() > b.front()){
            int temp = b.front(); b.pop_front();
            b.front()+=temp;
        }
    }

    cout<<cnt;
    
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    
    solution();

    return 0;
}