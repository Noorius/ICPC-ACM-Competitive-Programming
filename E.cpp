#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;



int fac(int c){
    int mult = 1;
    for(int i = 1; i<=c; i++){
        mult *= i;
    }
    return mult;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int q, n, left = 1, right = 9, sum = 0;
    string s, t;

    cin >> q;

    for(int _ = 0; _ < q; _++) {
        cin >> n >> s;
        t = "";
        for(int i = 0; i < s.size() - 1; i++) {
            if(s[i] > s[i + 1] and s[i] != '-' and s[i + 1] != '-') {
                cout << 0 << "\n";
                break;
            }
            if(s[i] != '-' and t == "") {
                left = (s[i] - '0');
            }else if (s[i] != '-' and t != ""){
                right = s[i] - '0';
                int dif = right - left + 1;
                int places = t.size();
                sum += ;
                t = "";
            }
            else {
                t = t + s[i];
            }
        }
    }
    return 0;
}