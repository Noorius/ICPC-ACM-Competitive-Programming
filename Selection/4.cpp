#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    
    int p=0, c=0;
    while(n>2){
        n-=3;
        c+=2;
    }
    
    if(n>0){
        cout<<c+1;
    }else{
        cout<<c;
    }
    
    return 0;
}