//
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
int n,a[Max]={0};
void solve(){
    cin >> n;
    int b[Max];  // đánh dấu
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        b[i] = 1;
    }
    double res = a[0] ,max = -1 , kt;
    int vitri;
    for(int i = 1 ; i < n ; i++){
        if(a[i] >= a[i-1]){
            res += a[i];
            b[i] = b[i -1] +1;
            kt = res / b[i];
            if(kt > max){
                vitri = i;
            }
        }
        else res = a[i];
    }
}
int main(){
    
    return 0;
}
