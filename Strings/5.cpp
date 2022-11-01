#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<vector<int> > v(201, vector<int>(201, 0));

void solution(string s1, string s2){
    int n = s1.length();
    int m = s2.length();

    for(int i=1; i <= s1.size(); i++){
        for(int j=1; j <= s2.size(); j++){
            if(s1[i-1] == s2[j-1]){
                v[i][j] = v[i-1][j-1] + 1; // к общему кол-во одинаковых символов добавлю однерку
            }else{
                v[i][j] = max(v[i-1][j], v[i][j-1]); //какое кол-во элементов ты нашел до i-поз. в строке s1, а до j-поз. в s2, мне нужен максимальный
            }
        }
    }

    cout<<v[n][m]<<"\n";

    /*for(int i=0;i<=s1.size();i++){
        for(int j=0;j<=s2.size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }*/
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);/**/

    string s1, s2; 
    while(cin>>s1){
        cin>>s2;
        solution(s1, s2); 
    }

    return 0;
}