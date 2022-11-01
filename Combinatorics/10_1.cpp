#include <bits/stdc++.h>

using namespace std;
vector<int> b;
vector<vector<int> > c;

void printing(){
    for(int num : b){
        cout<<num<<" ";
    }
    cout<<"\n";
}

void calc(int remSum, int Limit){
    if(remSum==0){
        c.push_back(b);
        return;
    }
    for(int j = Limit; j > 0 ; j--){
        if(remSum>=j){
            b.push_back(j);
            calc(remSum-j, j);
            b.pop_back();
        }
    }
}

void calc2(int calSum, int Limit, int desired){
    if(calSum==desired){
        //c.push_back(b);
        printing();
        return;
    }
    for(int j = 1; j <= Limit ; j++){
        if(calSum+j<=desired){
            //cout<<calSum<<endl;
            b.push_back(j);
            calc2(calSum+j, j, desired);
            b.pop_back();
        }
    }
}

int main(){
    int n;
    cin>>n;   

    //calc(n, n);
    calc2(0,n,n);
    
    /*vector<vector<int> >::reverse_iterator it;
    for(it = c.rbegin(); it!=c.rend(); it++){
        for(int num : (*it)){
            cout<<num<<" ";
        }
        cout<<"\n";
    }*/

    /*vector<vector<int> >::iterator it;
    for(it = c.begin(); it!=c.end(); it++){
        for(int num : (*it)){
            cout<<num<<" ";
        }
        cout<<"\n";
    }*/

    return 0;
}