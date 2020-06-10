//
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
int a[10000005]={0},b[10000005]={0},l,r,k;
void Prime(){
    a[1] = a[0] = 1;
    for(int i = 2 ; i <= sqrt(10000000) ; i++)
        if(a[i] == 0){
            for(int j = i * i ; j <= 10000000 ; j += i)
                a[j] = 1;
        }
}
void uoc(){
    for(int i = 2 ; i <= 10000000 ; i++)
        if(a[i] == 0)
            for(int j = i ; j <= 10000000 ; j += i)
                b[j]++;
}

int main(){
    Prime();
    uoc();
    int t ;
    cin >> t;
    for(int i = 1 ; i <= t ; i++){
        int res = 0;
        cin >> l >> r >> k;
        printf("Case #%d: ",i);
        for(int j = l ; j <= r ; j++)
            if(b[j] == k)
                res ++;
        cout << res <<endl;
    }
    return 0;
}
