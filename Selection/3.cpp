#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    
    int p = 0, c;
    for(int i=0; i<n; i++){
        cin>>c;
        if(c-p>15){
            cout<<p+15;
            return 0;
        }
        p = c;
    }
    p+15>90 ? cout<<90 : cout<<p+15;
    return 0;
}