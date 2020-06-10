/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

string s;
void solve(){
    getline(cin , s);
    stack <char> st;
    bool check = true;
    for(int i = 0 ; i < s.length() ; i++){
        char c = s[i];
        if(s[i] !=')'){
            st.push(c);
        }
        else{
            check = false;
            while(!st.empty()){
                char c = st.top();st.pop();
                if(c == '(') break;
                if(c == '+' || c == '-' || c == '/' || c == '*')
                    check = true;
            }
            if(check == false){
                cout << "Yes" << '\n';
                return;
            }
        }
    }
    cout << "No" << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t = 1; cin >> t;
    cin.ignore();
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)