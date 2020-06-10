/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
int Stack[1000];
int Top = 0;
string s;
int x;
void push(int x){
    Top++;
    Stack[Top] = x;
}
int empty(){
    if(Top == 0)
        return 1;
    return 0;
}
void pop(){
    if(empty() == 0)
        Top--;
}
int top(){
    if(empty() == 0){
        return Stack[Top];
    }
    else{
        return -1;
    }
}
void show(){
    if(empty() == 0){
        for(int i = 1 ; i <= Top ; i++)
        cout << Stack[i] << ' ';
    }
    else{
        cout << "empty";
    }
    cout << '\n';
}
void solve(){
    while(cin >> s){
        //if(s == "0") return;
        if(s == "push"){
            cin >> x;
            push(x);
        }
        else if(s == "show"){
            show();
        }
        else if(s == "pop"){
            pop();
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)