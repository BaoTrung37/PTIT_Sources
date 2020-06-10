/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

void solve(){
    string s;
    stack <char> st1;
    getline(cin,s);  
    for(int i = 0 ; i <= s.length();i++){
        if(s[i] == ' '|| i == s.length()){
            while(!st1.empty()){
                char s = st1.top();
                st1.pop();
                cout << s;
            }
            cout << ' ';
        }
        else{
            st1.push(s[i]);
        } 
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    cin.ignore();
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)