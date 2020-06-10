//https://www.spoj.com/PTIT/problems/PTIT123J/
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
string s;
stack <int> mystack;

int Check(string s){
    while (!mystack.empty()) mystack.pop();

    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] == '(' ) mystack.push(0);
        else if ( s[i] == '[') mystack.push(1);
        else if(s[i] == ')'){
            if(mystack.top() == 0 && !mystack.empty())
                mystack.pop();
            else return 0;
        }
        else if(s[i] == ']'){
            if(mystack.top() == 1 && !mystack.empty())
              mystack.pop();
            else return 0;
        }
    }
    if(mystack.empty()) return 1;
    return 0;
}
void solve(){
    while(getline(cin,s) && s != "."){
        if(Check(s)) cout <<  "yes" << endl;
        else cout << "no" << endl;
    }
}
int main(){
    solve();
    return 0;
}
