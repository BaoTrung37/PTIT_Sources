//https://codeforces.com/problemset/problem/118/A
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;

int main(){
    char c;
    while(cin >> c){
        if(! strchr("AOYEUIaoyeui", c))
            cout << "." << (char) tolower(c);
    }
    return 0;
}

// code by Bao Trung PTIT