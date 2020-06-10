/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

void solve(){
    int n;
    deque <int> q;
    string s;
    cin >> n;
    while(n--){
        cin >> s;
        if(s == "PUSHBACK"){
            int x; cin >> x;
            q.push_back(x);
        }
        else if(s== "PUSHFRONT"){
            int x; cin >> x;
            q.push_front(x);
        }
        else if(s == "PRINTFRONT"){
            if(q.empty()){
                cout << "NONE\n";
            }
            else {
                cout << q.front() << '\n';
            }
        }
        else if( s == "PRINTBACK"){
            if(q.empty()){
                cout << "NONE\n";
            }
            else {
                cout << q.back() << '\n';
            }
        }
        else if( s == "POPFRONT"){
            if(!q.empty())
                q.pop_front();
        }
        else if( s== "POPBACK"){
            if(!q.empty())
                q.pop_back();
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)