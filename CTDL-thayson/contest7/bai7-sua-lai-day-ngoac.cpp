/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

string s;
void solve(){
    getline(cin,s);
    stack <char> st;
    int cnt = 0;
    for(int i = 0 ; i < s.length() ; i++){
        char c = s[i];
        if(c == '(') st.push(c);
        else if(c == ')'){
            if(!st.empty()){
                st.pop();
            }
            else{
                st.push('(');
                cnt++;
            }
        }
    }
    cout << cnt + st.size() /2 << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    cin.ignore();
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)