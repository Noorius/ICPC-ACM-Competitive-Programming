#include <bits/stdc++.h>

using namespace std;


int sum = 0, k, n;


void calc(int i, vector<int>& a, vector<int>& b, set<vector<int> >& c){
    if(sum>k) return;
    if(k==sum){
        c.insert(b);
        return;
    }
    for(int j = i; j < a.size(); j++){
        if(sum+a[j]<=k){
            sum+=a[j];
            b.push_back(a[j]);
            calc(j+1,a,b,c);
            sum-=a[j];
            b.pop_back();
        }
    }
}

int main(){
    /*freopen("comb.in", "r", stdin);
    freopen("comb.out", "w", stdout);/**/

    while(cin>>k){
        cin>>n;   

        vector<int> a;
        vector<int> b;
        set<vector<int> > c;

        for(int i=0; i<n; i++){
            int t; cin>>t;
            a.push_back(t);
        }

        calc(0,a,b, c);

        cout<<"Sums of "<<k<<":\n";
        if(!c.empty()){
            set<vector<int> >::reverse_iterator it;
            for(it = c.rbegin(); it!=c.rend(); it++){
                for(int i=0; i<(*it).size()-1; i++){
                    cout<<(*it)[i]<<"+";
                }
                cout<<(*it)[(*it).size()-1]<<"\n";
            }
        }else{
            cout<<"NONE\n";
        }
    }
    
    return 0;
}