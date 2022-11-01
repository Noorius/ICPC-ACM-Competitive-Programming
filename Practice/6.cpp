#include <bits/stdc++.h>

using namespace std;

#define ll long long

struct Button{
    ll x1, x2, y1, y2, number;

    public:
        bool is_inside(ll c1, ll c2){
            if(x1 <= c1 and c1 <= y1 and c2>=x2 and c2<=y2){
                return true;
            }else{
                return false;
            }
        }
};

int button_cnt;
deque<Button> buttons;

void solution(ll coor1, ll coor2){
    deque<Button>::iterator it;

    ll answer = 0;

    for(it = buttons.begin(); it != buttons.end(); it++){
        if((*it).is_inside(coor1, coor2)){
            answer = (*it).number;
            Button temp = (*it);
            buttons.erase(it);
            buttons.push_front(temp);
            break;
        }
    }
    cout<<answer<<"\n";
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);/**/

    /*freopen("buttons.in", "r", stdin);
    freopen("buttons.out", "w", stdout);*/

    cin>>button_cnt;

    for(ll i=0; i<button_cnt; i++){
        ll x1, x2, y1, y2; cin>>x1>>x2>>y1>>y2;
        if(x1 > y1) swap(x1, y1);
        if(x2 > y2) swap(x2, y2);
        Button temp = {x1, x2, y1, y2, i+1};
        buttons.push_front(temp);
    }
    
    int q; cin>>q;
    while(q--){
        ll coor1, coor2; cin>>coor1>>coor2;
        solution(coor1, coor2);
    }
     
    return 0;
}