//https://codeforces.com/problemset/problem/122/A
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;

int main(){
    int n;
    cin >> n;
    if (n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 477 == 0 ||  n % 74 == 0)
        cout << "YES";
    else cout << "NO";
    return 0;
}
