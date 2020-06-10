//
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
int n,a[1000];
int main(){
    cin >> n;
    for(int i = 1 , x ; i <= n ; i++){
        cin >> x;
        a[x] = i;
    }
    for(int i = 1 ; i <= n ; i++)
        cout << a[i] << " ";
    return 0;
}
