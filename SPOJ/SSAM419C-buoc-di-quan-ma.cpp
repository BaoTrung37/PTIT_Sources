/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int xqX[8] = { 2, 1, -1, -2, -2, -1, 1, 2 }; 
int xqY[8] = { 1, 2, 2, 1, -1, -2, -2, -1 }; 
int res;

bool check(int x,int y){
    return (x >= 1 && x <= 8 && y >= 1 && y <= 8);
}

void BFS(int x1,int y1,int x2,int y2){
    queue <pair <ii,int>> q;
    q.push(make_pair(make_pair(x1,y1),0));
    while(q.size()){
        pair<ii,int> s = q.front(); q.pop();
        if(s.first.first == x2 && s.first.second == y2){
            res = s.second;
            return;
        }
        for(int i = 0 ; i < 8 ; i++){
            int x_next = s.first.first + xqX[i];
            int y_next = s.first.second + xqY[i];
            if(check(x_next,y_next)){
                q.push(make_pair(make_pair(x_next,y_next),s.second + 1));
            }
        }
    }
}

void solve(){
    char xx1,xx2;
    int y1,y2;
    cin >> xx1 >> y1 >> xx2 >> y2;
    int x1 = xx1 - 'a' + 1;
    int x2 = xx2 - 'a' + 1;
    res = 0;
    BFS(x1,y1,x2,y2);
    cout << res << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)