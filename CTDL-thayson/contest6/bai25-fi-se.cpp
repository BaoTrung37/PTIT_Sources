/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n;
void solve(){
    cin >> n;
    set_vect(a,n);
    sort(all(a));
    if(a[0] == a[n - 1]) cout << -1;
    else cout << a[0] << ' ' << a[1];
    cout << '\n';
}
// void solve(){
//     cin >> n;
//     set <int> st;
//     for(int i = 0 , x ; i < n ; i++){
//         cin >> x;
//         st.insert(x);
//     }
//     if(st.size() <= 1){
//         cout << -1;
//     }
//     else{
//         auto it = st.begin();
//         cout << *it << ' ';
//         cout << *(++it);
//     }
//     cout << '\n';
// }

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)