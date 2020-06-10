//
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a[6][3],t; 
    cin >> t;
    while(t--){
        for(int i = 0 ; i< 4 ; i++)
            for(int j = 0 ; j < 3 ; j++)
                cin >> a[i][j];
        for(int i = 1 ; i< 4 ; i++)
            for(int j = 0 ; j < 3 ; j++)
                a[i][j] = a[i][j] - a[0][j];
        a[4][0] = a[1][1] * a[2][2] - a[1][2] * a[2][1];
        a[4][1] = a[1][2] * a[2][0] - a[1][0] * a[2][2];
        a[4][2] = a[1][0] * a[2][1] - a[1][1] * a[2][0];
        a[5][0] = a[4][0] * a[3][0];
        a[5][1] = a[4][1] * a[3][1];
        a[5][2] = a[4][2] * a[3][2];
        int res = a[5][0] + a[5][1] + a[5][2];
        (res == 0) ? cout <<"YES" : cout << "NO";
        cout << endl;
    }
    return 0;
}
