/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define pii pair<pair<int, int>,int>
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n;
char a[1002][1002];
ii x,y;
int bfs(){
    queue <pii> q;
    set <ii> vis;
    vis.insert(x);
    q.push({x,0});
    while(!q.empty()){
        pii s = q.front() ; q.pop();
        if(s.first == y){
            return s.second;
        }
        // kiểm tra dưới vị trí hiện tại
        for(int i = s.first.first - 1 ; i >= 0 ; i--){
            if(a[i][s.first.second] == 'X')
                break;
            if(vis.find({i,s.first.second}) == vis.end()){
                vis.insert({i,s.first.second});
                q.push(pii(ii(i,s.first.second) , s.second + 1));
            }
        }
        // kiểm tra trên vị trí hiện tại
        for(int i = s.first.first + 1 ; i < n ; i++){
            if(a[i][s.first.second] == 'X')
                break;
            if(vis.find({i,s.first.second}) == vis.end()){
                vis.insert({i,s.first.second});
                q.push(pii(ii(i,s.first.second) , s.second + 1));
            }
        }
        // kiểm tra bên trái vị trí hiện tại
        for(int i = s.first.second - 1 ; i >= 0 ; i--){
            if(a[s.first.first][i] == 'X')
                break;
            if(vis.find({s.first.first,i}) == vis.end()){
                vis.insert({s.first.first,i});
                q.push(pii(ii(s.first.first,i) , s.second + 1));
            }
        }
        // kiểm tra bên phải vị trí hiện tại
        for(int i = s.first.second + 1 ; i < n ; i++){
            if(a[s.first.first][i] == 'X')
                break;
            if(vis.find({s.first.first,i}) == vis.end()){
                vis.insert({s.first.first,i});
                q.push(pii(ii(s.first.first,i) , s.second + 1));
            }
        }
    }
}
void solve(){
    cin >> n;
    for(int i = 0 ; i < n ; i++)
        for(int j = 0 ; j < n ; j++)
            cin >> a[i][j];
    cin >> x.first >> x.second >> y.first >> y.second;
    cout << bfs(); 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)