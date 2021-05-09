/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int N = 1e5 + 5;

int n;
string s;
void solve(){
    cin >> n >> s;
    int dung = 0,sai = 0;
    for(auto c : s){
        if(c == '('){
           dung++;
        }
        else{
            if(dung){
                dung--;
            }
            else{
                sai++;
            }
        }
    }
    cout << dung << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)