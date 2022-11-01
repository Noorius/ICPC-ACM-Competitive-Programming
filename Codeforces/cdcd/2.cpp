#include <bits/stdc++.h>

using namespace std;

int q, n;

void binarySearch(int arr[], int l, int r, int &sum, bool &status)
{
    if (r >= l and status) {
        int mid = l + (r - l) / 2;
 
        if (mid!=n-1 and arr[mid]>=arr[mid+1]){
            int t = 0;
            while(arr[mid]>arr[mid+1]){
                arr[mid] /= 2;
                sum++;
                t++;
            }
            if(arr[mid] == arr[mid+1] and arr[mid]/2 == arr[mid+1]){
                sum -= t;
                status = false;
                return;
            }else{
                sum++;
            }
        }
 
        binarySearch(arr, l, mid - 1, sum, status);
        binarySearch(arr, mid + 1, r, sum, status);
    }
    return;
}


void solution(){
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    int sum = 0; /*bool status = true;
    //binarySearch(a, 0, n-1, sum, status);
    if(status)
        cout<<sum<<"\n";
    else
        cout<<-1<<"\n"; */

    for(int i=n-1; i>0; i--){
        if(a[i] <= a[i-1]){
            while(a[i] < a[i-1]){
                a[i-1] /= 2;
                sum++;
            }
            if(a[i] == a[i-1]){
                if(a[i] == a[i-1]/2){
                    cout<<-1<<"\n"; return;
                }
                else
                    a[i-1] /= 2; sum++;
            }
        }
    }
    cout<<sum<<"\n";
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);/**/

    cin>>q;

    while(q--){
        solution();
    }
    

    return 0;
}