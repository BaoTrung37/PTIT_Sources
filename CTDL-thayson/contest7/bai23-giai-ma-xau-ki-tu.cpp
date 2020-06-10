/*
    ý tưởng tạo 2 stack char và int
    stack char lưu các kí tự chữ và [ 
    stack int lưu các kí tự số
    gặp số ,[ , chữ thì đưa vào stack
    gặp ] thì kiểm tra stack int và char rồi đưa ra lặp sau đó đưa trở lại vào stack
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

string s;
void solve(){
    getline(cin,s);
    stack <int> stackInt;
    stack <char> stackChar;
    string tmp = "",res = "";
    for(int i = 0 ; i < s.length() ; i++){
        int cnt = 0;
        // nếu s[i] là kí tự số thì thực hiện tăng i lên và tính số rồi đưa vào stack
        if('0' <= s[i] && s[i] <= '9'){
            while('0' <= s[i] && s[i] <= '9'){
                cnt = cnt * 10 + s[i] - '0';
                i++;
            }
            i--;
            stackInt.push(cnt);
        }
        else if(s[i] == ']'){
            tmp = "";
            cnt = 0;
            //kiểm tra stackint và lấy phần tử top
            if(!stackInt.empty()){
                cnt = stackInt.top();
                stackInt.pop();
            }
            // đưa các chữ trong stackchar ra 
            while(!stackChar.empty() && stackChar.top() != '['){
                tmp = stackChar.top() + tmp;
                stackChar.pop();
            }
            // pop phần từ [
            if(!stackChar.empty() && stackChar.top() == '[')
                stackChar.pop();
            // lặp string cnt lần
            for(int i = 0 ; i < cnt ; i++){
                res = res + tmp;
            }
            // đưa các phần từ vào bên trong stack
            for(int i = 0 ; i < res.length() ;i++){
                stackChar.push(res[i]);
            }
            res = "";
        }
        else if(s[i] == '['){
            // nếu trước [ là số thì đưa [ vào stack
            if('0' <= s[i - 1] && s[i - 1] <= '9'){
                stackChar.push(s[i]);
            }
            // đưa [ vào và đưa 1 vào stack char
            else{

                stackChar.push(s[i]);
                stackInt.push(1);
            }
        }
        else{
            stackChar.push(s[i]);
        }
    }
    while(!stackChar.empty()){
        res = stackChar.top() + res;
        stackChar.pop();
    }
    cout << res << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    cin.ignore();
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)