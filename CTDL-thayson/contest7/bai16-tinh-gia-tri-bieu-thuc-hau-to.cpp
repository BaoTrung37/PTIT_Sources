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
    for(int i = 0 ; i < s.length() ; i++){
        char c = s[i];
        if('0' <= c && c <= '9'){
            st.push(c - '0');
        }
        else{
            int x1 = st.top(); st.pop();
            int x2 = st.top(); st.pop(); 
            int res;
            if(c == '+'){
                res = x2 + x1;
            }
            else if(c == '-'){
                res = x2 - x1;
            }
            else if(c == '*'){
                res = x1 * x2;
            }
            else if(c == '/'){
                res = x2 / x1;
            }
            st.push(res);
        }
    }
    cout << st.top() << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)