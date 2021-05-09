/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int nmax = 10005;

string s;
char a[] = {'R','S','C'};
void solve(){
    cin >> s;
    int n = s.length();
    int a = 0, b = 0, c = 0;
    for(auto x : s){
        if(x == 'R') a++;
        if(x == 'P') b++;
        if(x == 'S') c++;
    }
    if(a>=max(b,c)){
        while(n--)cout<<'P';

    }
    else if(b>=max(a,c)){
        while(n--) cout<<'S';

    }
    else if(c>=max(a,b)){
        while(n--) cout<<'R';

    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)