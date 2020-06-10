/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int a[1002][1002];
int n;
string s;
void solve(){
    cin >> n;
    cin.ignore();
    memset(a,0,sizeof(a));
    for(int i = 1 ; i <= n ; i++){
        getline(cin ,s);
        istringstream s_cin(s);
        int j;
        while(s_cin >> j) a[i][j] = 1;
    }
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1; j <= n ; j++)
            cout << a[i][j] << ' ';
        cout << '\n';
    }
    
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)