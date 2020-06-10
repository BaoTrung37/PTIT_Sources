/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n;
void solve(){
    cin >> n;
    string s;
    queue <int> q;
    while(n--){
        cin >> s;
        if(s == "PUSH"){
            int x ; cin >> x;
            q.push(x);
        }
        else if(s == "PRINTFRONT"){
            if(q.empty()){
                cout << "NONE\n";
            }
            else cout << q.front() <<'\n';
        }
        else if(s== "POP"){
            if(!q.empty())
                q.pop();
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