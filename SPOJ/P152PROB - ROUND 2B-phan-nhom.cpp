//
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
int n,k,a[100005],res = 0;
void init(){
    cin >> n >> k;
    for(int i = 0 ; i < n ; i ++)
        cin >> a[i];
}
void Demsonhom(int a[], int n , int k){
    sort(a,a+n);
    res = 1;
    for(int i = 1 ; i < n ; i ++){
        if(a[i-1] + k >= a[i])
            continue;
        else res++;
    }
    cout << res;
}
int main(){
    init();
    if(n == 0) cout << "0";
    else
        Demsonhom(a,n,k);
    return 0;
}
