//https://www.spoj.com/PTIT/problems/BCSTACK/
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
long Stack[10001];
int Top = 0;
void init(){
    Top = 0;
}
void push(long a){
    Top++;
    Stack[Top] = a;
}
int empty(){
    if (Top == 0) return 1; // rỗng
    return 0;       // khác rỗng
}
void pop(){
    if(empty() == 0){
        Top--;
    }
}
long top(){
    if(empty() == 1)  // rỗng
        return -1;
    else 
        return Stack[Top];
}
int size(){
    return Top;
}
int main(){
    char s[200];
    i32 x;
    cin >> s;
    while(strcmp(s,"end") != 0){
        if(strcmp(s,"init") == 0)
            init();
        else if(strcmp(s,"push") == 0){
            cin >> x;
            push(x);
        }
        else if(strcmp(s,"top") == 0){
            cout << top() << endl;
        }
        else if(strcmp(s,"pop") == 0){
            pop();
        }
        else if(strcmp(s,"empty") == 0)
            cout << empty() << endl;
        else if (strcmp(s,"size") == 0)
            cout << size() << endl;
        cin >> s;
    }
    return 0;
}
