//https://www.spoj.com/PTIT/problems/P184PROH/
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
int n,a[100005];
int Find(int a[],int n){
    int maxx = -100000000;
    for(int i = 0 ; i < n ; i++){
        for(int j = n -1 ; j > i ; j --){
            if (a[j] - a[i] > maxx) maxx = a[j] - a[i];
        }
    }
    return maxx;
}
int main(){
    cin >> n;
    for(int i = 0 ; i< n ; i++)
        cin >> a[i];
    cout << Find(a,n);
    return 0;
}
