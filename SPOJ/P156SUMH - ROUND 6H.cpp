//
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    n = (n+1)/2;
    for(int i = 1 ; i <= 2*n-1 ; i++){
        for(int j = 1 ; j <= 2*n-1 ; j++){
            if(abs(n-i) + abs(n-j) < n)
                cout <<"D";
            else cout <<"*";
        }
        cout << endl;
    }
    return 0;
}
