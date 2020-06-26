/*
    cây nhị phân duyệt theo inoder thì có dạng tăng dần
    đưa vào set rồi in ra
*/
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
void solve(){
    cin >> n;
    set <int> st;
    while(n--){
        int a,b;
        char c;
        cin >> a >> b >> c;
        st.insert(a);
        st.insert(b);
    }
    for(auto it = st.begin() ; it != st.end() ; it++)
        cout << *it << ' ';
    cout << '\n';
}

// void solve(){
//     cin >> n;
//     vector <int> res;
//     while(n--){
//         int a,b;
//         char c;
//         cin >> a >> b >> c;
//         res.push_back(a);
//         res.push_back(b);
//     }
//     sort(all(res));
//     int n = unique(all(res)) - res.begin();
//     for(int i = 0 ; i < n ; i++)
//         cout << res[i] << ' ';
//     cout << '\n';
// }
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)