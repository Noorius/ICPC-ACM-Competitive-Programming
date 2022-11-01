#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int f(string s){
    vector<string> pr;
    vector<string> sf;
    

    for(int i=0;i<s.length()-1; i++){
        pr.push_back(s.substr(0,i+1));
        sf.push_back(s.substr(s.size()-i-1,i+1));
    }
    for(int i=s.size()-2;i>=0; i--){
        if(pr[i]==sf[i])
            return pr[i].size();
    }
    return 0;
}

//n^3
vector<int> f1(string s){
    int n=s.size();
    vector<int> pi(n);
    for(int i = 1; i<n; i++){
        for(int k=0; k<=i; k++){
            if(s.substr(0,k)==s.substr(i-k+1,k))
                pi[i]=k;
        }
    }
    return pi;
}

vector<int> f2(string s){
    int n=s.size();
    vector<int> pi(n);
    for(int i = 1; i<n; i++){
        int j = pi[i-1];    
        while(j>0 and s[i]!=s[j]){
            j = pi[j-1];
        }
        if(s[i]==s[j]) {
            j+=1;
        }
        pi[i] = j;
    }
    return pi;
}


void f3(string&s){
    
    int n=s.size();
    for(int i = 1; i<n; i++){
        vector<int> pi(n);

        int j = pi[i-1]; 

        while(j>0 and s[i]!=s[j]){
            j = pi[j-1];
        }
        if(s[i]==s[j]) {
            j+=1;
            s = s.substr(j);
            n=s.size();
            i = 1;
        }
        pi[i] = j;
        
    }
}


bool finder(string t, string a, vector<int> pi){
    int l, k = l = 0;
    while(true){
        if(t[k]==a[l]){
            k++; l++;
            if(l==a.size()){
                return true;
            }
        }else{
            if(l==0){
                k++;
                if(k==t.length())
                    return false;
            }   
            else{
                l = pi[l - 1];
            }
        }
    }
}

int main(){
    //int n; cin>>n;
    //for(int i=0; i<n; i++){
        string s;
        cin>>s;
        //vector<int> pi = f2(s);
        f3(s);

        cout<<s<<"\n";
    //}

    /* 
    if(finder(s, t, pi)){
        cout<<"Found";
    }else{
        cout<<"Not found";
    }
    

    int n = s.length();
    int t = n - pi[n-1];

    if(n % t !=0)
        cout<<1;
    else{
        cout<< n / t;
    }
    */
    /*for(int c : pi){
        cout<< c <<" ";
    }
    cout<<endl;*/
    return 0;
}