/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

string s;
void solve(){
    cin >> s;
    stack <int> st;
    for(int i = 0 ; i <= s.length() ; i++){
        if(s[i] == 'I' || i == s.length() ){
            cout << i + 1;
            while(!st.empty()){
                cout << st.top();
                st.pop();
            }
        }
        else if(s[i] == 'D'){
            st.push(i + 1);
        }
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