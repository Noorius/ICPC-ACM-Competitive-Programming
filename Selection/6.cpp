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
        string s;
        for(int j=0; j<m; j++){
            string k; cin>>k;
            s+=k;
        }
        int cnt=0;
        for(int j=1; j<m-1; j++){
            if(s.length()==2) break;
            if(s[j-1]=='0' && s[j+1]=='0' and j!=0 and j!=m-1){
                cnt+=1;
                s.erase(j,1);
                j-=2;
            }
        }
        cnt%2==0 ? cout<<"Bob" : cout<<"Alice";
        //cout<<s<<" "<<cnt;
        cout<<endl;
    }

    return 0;
}