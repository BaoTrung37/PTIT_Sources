//https://www.spoj.com/PTIT/problems/BCCAITUI/
#include <bits/stdc++.h>
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
int L[102][102]={0};
int A[101],B[101];
int n,m;
void input(){
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++ ){
        cin >> A[i] >> B[i]; 
    }
}
void in(){
    for ( int i = 1 ; i <= n ; i++){
        for ( int j = 1 ; j <= m ; j++ )
            cout << L[i][j] << " ";
        cout << endl;
    }
}
void solve(){
    input();
    for(int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= m ; j++){
            if( A[i] <= j ) L[i][j] = max( L[i - 1][j - A[i]] + B[i] , L[i-1][j]);
            else L[i][j] = L[i-1][j];
        }
    }
    //in();
    cout << L[n][m];
}
int main(){
    solve();
    return 0;
}
