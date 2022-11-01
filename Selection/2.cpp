#include <iostream>

using namespace std;

int main(){
    int n, mini = 0;
    string s;
    cin>>n>>s;

    for(int i=1; i<n; i++){
        if(s[i-1]==s[i])
            mini++;
    }
    cout<<mini;
    return 0;
}