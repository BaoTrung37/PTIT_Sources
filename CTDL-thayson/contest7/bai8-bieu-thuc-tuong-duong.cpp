/*
    ý tưởng lưu vị trí của dấu +,-
    nếu trước dấu ngoặc là - thì duyện từ index + 1 đến vị trí hiện tại
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

string s;
void solve(){
    getline(cin,s);
    stack <pair<int,int>> st;
    for(int i = 0 ; i < s.length() ; i++){
        // -(
        if(s[i] == '(' && s[i - 1] == '-'){
            st.push({i,1});
        } 
        // +(
        else if(s[i] == '(' && s[i - 1] == '+'){
            st.push({i,2});
        }
        // trước ngoặc ko có toán tử
        else if(s[i] == '(' && (s[i - 1] != '+' || s[i - 1] != '-')){
            st.push({i,0});
        }
        else if(s[i] == ')'){
            pair <int,int> tmp = st.top();
            // nếu vị trí top là -
            if(tmp.second == 1){
                for(int j = tmp.first + 1 ; j < i ; j++){
                    // đổi d
                    if(s[j] == '+') s[j] = '-';
                    else if(s[j] == '-') s[j] = '+';
                }
            }
            st.pop();
        }
    }
    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] != '(' && s[i] != ')')
            cout << s[i];
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