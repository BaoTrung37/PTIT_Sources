#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
string s;
bool chuaxet[1000];
int n,a[1000];
void input(){
    cin >> s;
    n = s.length();
    for(int i = 1 ; i <= n ; i++){
        chuaxet[i] = true;
    }
        
}
void output(){
    for( int i = 1 ; i <= n ; i++)
        cout << s[a[i] - 1];
    cout <<" ";
}
void Try(int i){
    for(int j = 1 ; j <= n ; j++){
        if(chuaxet[j] == true){
            a[i] = j;
            chuaxet[j] = false;
            if(i == n) output();
            else Try(i+1);
            chuaxet[j] = true;
        }
    }
}
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        input();
        Try(1);
        cout << endl;
    }
    return 0;
}
