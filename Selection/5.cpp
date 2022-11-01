#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    
    for(int i=0; i<n; i++){
        int m;
        cin>>m;
        int st[m],in[m];
        for(int j=0, k; j<m; j++){
            cin>>in[j];
            st[j] = in[j];
        }
        sort(st, st+m);

        for(int j=1; j<m; j++){
            if(in[j-1]>in[j] and abs(in[j-1]-in[j])==1){
                swap(in[j-1], in[j]);
            }
        }

        equal(st, st+m, in) ? cout<<"Yes" : cout<<"No";
        cout<<endl;
    }

    
    return 0;
}