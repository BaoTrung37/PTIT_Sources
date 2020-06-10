//
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
string a,b;
int lcs(string &a,string &b){
    int m = a.size();
    int n = b.size();
    vector <vector <int> > f (m + 1 , vector <int> (n + 1, 0 ));
    for(int i = 1 ; i <= m ; i++){
        for(int j = 1 ; j <= n ; j++){
            if(a[i-1] == b[j-1]) f[i][j] = f[i-1][j-1] + 1;
            else f[i][j] = max(f[i-1][j] , f[i][j-1]);
        }
    }
    return f[m][n];
}
int main(){
    cin >> a >> b;
    cout << lcs(a,b);
    return 0;
}
