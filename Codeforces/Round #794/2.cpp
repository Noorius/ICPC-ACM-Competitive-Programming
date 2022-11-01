#include <bits/stdc++.h>
using namespace std;
#define inf (int)1e18

int maxSub(int a[], int size)
{
    /*int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;*/

    int inv = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if(a[i] > a[i+1]){
            inv++; i++;
        }
    }
    return inv;
}

void solution(){
    int n;
	cin>>n;

    int a[100001];

    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    cout<<maxSub(a, n)<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	
    int q; cin>>q;

    while(q--){
        solution();
    }

    return 0;

}