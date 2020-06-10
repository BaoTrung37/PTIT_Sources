/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

string s;
void solve(){
    //getline(cin,s);
    cin >> s;
    stack <char> st;
    for(int i = 0 ; i < s.length(); i++){
        char c = s[i];
        if(c == '(' || c == '[' || c == '{')
            st.push(c);
        else{
            if(!st.empty() && c == ')' && st.top() == '(')
                st.pop();
            else if (!st.empty() && c == '}' && st.top() == '{')
                st.pop();
            else if (!st.empty() && c == ']' && st.top() == '[')
                st.pop();
            else{
                cout << "NO" << '\n';
                return;
            }
        }
    }
    cout << "YES" <<  '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    //cin.ignore();
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)