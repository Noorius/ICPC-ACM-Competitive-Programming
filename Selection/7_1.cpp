#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
    vector<vector<double> > e(2001, vector<double>(2001, 0.0));
    int n,t;
    double p;
    cin>>n>>p>>t;
    e[0][0] = 1;
    for(int i=1;i<=t;i++){
        e[i][0]= e[i-1][0] * (1-p);
        for(int j=1; j<=n; j++){
            //if(j>t) break;
            if(j==n){
                e[i][j] = e[i-1][j-1]*p + e[i-1][j]; 
            }else{
                e[i][j] = e[i-1][j-1]*p + e[i-1][j]*(1-p);
            }
        }
    }
    double sum=0;
    for(int j=0; j<=n; j++){
        sum+=e[t][j]*j;
    }
    cout<<sum<<endl;
    return 0;
}