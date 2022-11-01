#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main(){
    int n, t;
    double p;
    cin>>n>>p>>t;
    
    vector<vector<double> > e(2001, vector<double>(2001, 0.0));

    e[1][1] = p;
    e[1][0] = 1-p;

    for(int j=2; j<=t; j++){
        e[j][0] = e[j-1][0] * (1-p);
    }

    for(int i=2; i<=t; i++){
        for(int j=1; j<=n; j++){
            if(j>t) break;
            if(i==j)
                e[i][j] = e[i-1][j-1] * p + e[i-1][j] * (1-p);
            else
                
        }
        e[i][n] = e[i-1][n-1] * p + e[i-1][n];
    }

    double sum = 0;
    for(int i=0; i<=n; i++){
        if(i>t) break;
        sum += e[t][i] * i;
    }

    /**/for(int i=0; i<=t; i++){
        for(int j=0; j<=n; j++){
            cout<<e[i][j]<<" | ";
        }
        cout<<"\n";
    }
    cout<<sum;
    return 0;
}