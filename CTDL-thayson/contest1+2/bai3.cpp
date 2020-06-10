//
// Code By CodeWar :3
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
const int mod = 1e9+7;
#define pb push_back;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
int a[1000],n;
void solve(){
    cin >> n;
    vector <int> a(n);
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    if(next_permutation(all(a))){
        for(int i = 0 ; i < n ; i++)
            cout << a[i] << ' ';
    }
    else {
        for(int i = 0 ; i < n ; i++)
            cout << i + 1 << ' ';
    }
    cout << '\n';
}
// void solve(){
//     cin >> n;
//     for(int i = 0 ; i < n ; i++)
//         cin >> a[i];
//     int i = n - 2;
//     while( a[i] > a[i + 1]) i--;
//     if(i < 0){
//         for(int i = 1 ; i <= n ; i++)
//             cout << i << ' ';
//         cout << endl;
//         return;
//     }
//     int j = n - 1;
//     while(a[i] > a[j]) j--;
//     swap(a[i],a[j]);
//     int d = i + 1, c = n - 1;
//     while(d < c){
//         swap(a[d],a[c]);
//         d++ ; c --;
//     }
//     for(int i = 0 ; i < n ; i++)
//         cout << a[i] << ' ';
//     cout << endl;
// }

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3