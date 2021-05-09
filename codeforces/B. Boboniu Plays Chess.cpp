/**/
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

int n,m,sx,sy;
void solve(){
    cin >> n >> m >> sx >> sy;
    cout << sx << " " << sy << "\n";
    // in cột sy
    for(int i = 1 ; i <= n ; i++) 
        if(i != sx) cout << i << " " << sy << "\n"; 
    int c = 1;
    for(int i = 1 ; i <= m ; i++){
        if(i != sy){    // gặp cột sy thì bỏ qua
            // in từ trên xuống
            if(!c){
                for(int j = 1 ; j <= n ; j++) cout << j << " " << i << "\n";
            }
            // in từ dưới lên
            else{
                for(int j = n ; j > 0 ; j--) cout << j << " " << i << "\n";
            }
            // c = 0 và c = 1
            c ^= 1;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By Pain (Bao Trung)