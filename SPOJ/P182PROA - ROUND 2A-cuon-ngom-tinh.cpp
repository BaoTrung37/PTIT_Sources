//https://www.spoj.com/PTIT/problems/P182PROA/
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
int c,v0,v1,a,l,res = 1; // c: số trang , v0: số trang đọc ban đầu, v1: số trang tối da , a : số cộng , l : lùi số trang
void solve(){
    cin >> c >> v0 >> v1 >> a >> l;
    int kt = v0 ,cmt,x = a;   // Khởi tạo ngày đọc đầu tiên
    while(1){
        if( kt >= c ){        // kiểm tra
            cout << res;
            return;
        }
        cmt = v0 + x;          // số trang đọc ngày tiếp theo
        if (cmt >= v1) cmt = v1;    // nếu số trang lớn hơn v1 thì lấy v1
        kt = kt + cmt - l;          // số trang hiện tại + số trang sẽ đoc - số trang sẽ lùi
        res ++;     
        x += a;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
