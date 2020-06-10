//
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
int a,b; //độ dài hình chữ nhật 
int A[3];
int Kttamgiac(int x,int y,int z){
    if(x + y < z || x + z < y || z + y < x) return 0;
    if(x*x + y*y  == z*z || x*x + z*z == y*y || z*z + y*y == x*x)
        return 1;
    return 0;
}
int main(){
    cin >> a >> b;
    if(a > b) swap(a,b);
    for(int i = 0 ; i < 3 ;i++ )
        cin >> A[i];
    sort(A,A+3);
    if(Kttamgiac(A[0],A[1],A[2]) == 1){
        if(A[0] <= a && A[1] <= b) cout <<"YES";
        else cout << "NO";
    } 
    else cout <<"NO";
    return 0;
}
