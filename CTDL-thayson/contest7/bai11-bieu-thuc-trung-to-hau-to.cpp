/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

string s;
int check(char c){
    if (c == '(' || c == ')')
        return 0;
    else if(c == '+' || c == '-')
        return 1;
    else if(c == '*' || c == '/' || c == '%')
        return 2;
    else if (c == '^') 
        return 3;
    return -1;
}
void solve(){
    getline(cin,s);
    stack <char> st;
    string res = "";
    for(int i = 0 ; i < s.length() ; i++){
        char c = s[i];
        if(c != ' '){
            if(('A' <= c && c <= 'Z' )|| ('a' <= c && c <= 'z'))
                res += c;
        else if(c == '(') st.push(c);
        else if(c == ')'){
            while(st.top() != '('){
                char y = st.top();
                res += y;
                st.pop();
            }
            if(st.top() == '(')
                st.pop();
        }
        else{
            if(st.empty() || st.top() == '(' || check(c) > check(st.top()))
                st.push(c);
            else{
                while(!st.empty() && check(c) <= check(st.top())){
                    char y = st.top();
                    res += y;
                    st.pop();
                }
                st.push(c);
            }
        }
        }
    }
    while(!st.empty()){
        char y = st.top();
        res += y;
        st.pop();
    }
    for(auto z : res)
        if(z != '(') cout << z;
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