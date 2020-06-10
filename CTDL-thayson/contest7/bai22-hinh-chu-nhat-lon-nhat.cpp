/*
    test:
    7
    6   2   5   4   5   1   6
    |                       |
    |       |       |       |
    |       |   |   |       |
    |       |   |   |       |
    |   |   |   |   |       |
    |   |   |   |   |   |   |
    tạo 2 mảng tịnh tiến để kiểm tra nhỏ bên trái và bên phải tại từng vị trị
    vì l[i] - 1 = -1 hoặc bằng lớn nhất khi l[i] - 1 < i && a[l[i] - 1] < a[i]
    r[i] + 1 = n + 1 hoặc bằng bé nhất khi r[i] + 1 > i && a[r[i] + 1] < a[i]
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n;

void solve(){
    cin >> n;
    vector <ll> a(n), l(n),r(n);
    ll res = 0;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    stack <ll> st,cs;
    for(int i = 0 ; i < n ; i++){
        while(!st.empty() && a[i] < st.top()){
            r[cs.top()] = i;
            st.pop();
            cs.pop();
        }
        st.push(a[i]);
        cs.push(i);
    }
    while(!st.empty()){
        r[cs.top()] = n;
        st.pop();
        cs.pop();
    }
    for(int i = n - 1; i >= 0 ; i--){
        while(!st.empty() && a[i] < st.top()){
            l[cs.top()] = i;
            st.pop();
            cs.pop();
        }
        st.push(a[i]);
        cs.push(i);
    }
    while(!st.empty()){
        l[cs.top()] = -1;
        st.pop();
        cs.pop();
    }
    for(int i = 0 ; i < n ; i++)
        cout << l[i] << ' ';
    cout << '\n';
    for(int i = 0 ; i < n ; i++)
        cout << r[i] << ' ';
    cout << '\n';
    // for(int i = 0 ; i < n ; i++){
    //     if(a[i] * (r[i] - l[i] - 1) > res)
    //         res = a[i] * (r[i] - l[i] - 1);
    // }
    // cout << res << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)