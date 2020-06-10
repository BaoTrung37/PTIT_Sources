/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n;
set <int> st;
void solve(){
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        st.insert(x);
    }
    if(st.size() < 2)
        cout << "NO";
    else {
        auto it = st.begin();
        cout << *(++it);
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)