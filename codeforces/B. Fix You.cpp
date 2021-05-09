/*
    để hàng ko ra khỏi băng chuyền thì cột cuối cùng phải đi xuống
    và hàng cuối cùng phải đi sang ngang
    đếm R ở cột cuối và đếm D ở hàng cuối
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(int i=0;i<n;i++)cin>>a[i];
#define db(x) cerr << #x << " = "  << (x) << ' ';
const int N = 100005;

int n,m;
void solve(){
    cin >> n >> m;
    char a[n][m];
    for(int i = 0 ; i < n ; i++)
        for(int j = 0 ; j < m ; j++)
            cin >> a[i][j];
    int cnt = 0;
    for(int i = 0 ; i < m ; i++){
        if(a[n - 1][i] == 'D') cnt++;
    }
    for(int i = 0 ; i < n ; i++)
        if(a[i][m - 1] == 'R') cnt++;
    cout << cnt << "\n";
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By Pain (Bao Trung)