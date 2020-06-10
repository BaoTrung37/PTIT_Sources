//
#include <bits/stdc++.h>
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;

using namespace std;
int a,b,prime[1000007]={0};
i64 x[1000007]={0};
void input(){
    for(int i=1 ; i<=1000000 ; i++){
         for ( int j = i ; j <= 1000000 ; j+=i){
            x[j] += i;
            prime[j]++;
        }
    }
}
void Solve(){
    cin >> a >> b;
    i64 res1=0,res2 = 0; 
    for ( int i= a ; i <= b ; i++){
        res1 += prime[i];
        res2 += x[i];
    }
    cout << res1 << " " << res2 << endl;
}
int main(){
    int t;
    cin >> t;
    input();
    while(t--)
        Solve();
    return 0;
}
