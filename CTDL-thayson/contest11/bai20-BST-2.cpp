/*
    Duyệt theo inoder L N R mà trong BST L < N < R 
    kiểm tra mảng a có tăng dần ko ?
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int N = 1e3 + 5;

int n,a[N];
void solve(){
    cin >> n;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    for(int i = 0 ; i < n - 1; i++)
        if(a[i] >= a[i + 1]){
            cout << "0\n";
            return;
        }
    cout <<"1\n";
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)