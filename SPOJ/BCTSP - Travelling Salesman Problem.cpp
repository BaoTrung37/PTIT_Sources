//
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
int n,a[15][15],check[15]={0},m = 100000000;
void BackTrack(int tong,int bd,int dem){
    if(dem < n - 1 && tong < m){
        for(int i = 1 ; i < n ; i++){
            if(check[i] == 0){
                check[i] = 1;
                BackTrack(tong + a[bd][i],i,dem + 1);
                check[i] = 0;
            }
        }
    }
    else m = min(m,tong+a[bd][0]); 
}
int main(){
    cin >> n;
    for(int i = 0 ; i < n ; i++)
        for(int j = 0 ; j < n ; j++)
            cin >> a[i][j];
    BackTrack(0,0,0);
    cout << m;
    return 0;
}
