//https://www.spoj.com/PTIT/problems/BCLIQ/
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
int n;
int a[10005],L[10005],Lmax,res = -1;
void input(){
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        L[i] = 0;
    }
}
void solve(){
    input();
    for(int i = 0 ; i < n ; i++){
        int Lmax = 0;
        for(int j = 0 ; j < i ; j ++){
            if(a[i] > a[j]){
                if(L[j] > Lmax)
                    Lmax = L[j];
            }
        }
        L[i] = Lmax + 1;
        if(res < Lmax ) Lmax = res;
    }
    cout << res;
}
int main(){
    
    return 0;
}
