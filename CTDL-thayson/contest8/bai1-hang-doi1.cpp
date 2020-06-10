/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n;
void solve(){
    cin >> n;
    int x;
    queue <int> q;
    while(n--){
        cin >> x;
        if(x == 1){
            cout << q.size() << '\n';
        }
        else if(x == 2){
            if(q.empty()){
                cout << "YES\n";
            }
            else cout <<  "NO\n";
        }
        else if(x == 3){
            int kt ;
            cin >> kt;
            q.push(kt);
        }
        else if(x == 4){
            if(!q.empty())
                q.pop();
        }
        else if(x == 5){
            if(q.empty()){
                cout << -1 << '\n';
            }
            else cout << q.front() << '\n';
        }
        else{
            if(q.empty()){
                cout << -1 << '\n';
            }
            else cout << q.back() << '\n';
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)