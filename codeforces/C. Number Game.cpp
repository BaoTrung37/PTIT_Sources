/*
    nếu n == 1 thì FastestFinger win
    n lẻ thì Ashishgup win (n / n == 1)
    Trường hợp n chẵn ko có ước lẻ (2 ^ x) buộc Ashishgup - 1 và FastestFinger win
    Trường hợp n chăn và có ước lẻ 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int N = 1e5 + 5;

int n;
bool ispr(int n){
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n) ; i++){
        if(n % i == 0) return false;
    }
    return true;
}
void solve(){
    cin >> n;
    if(n == 1){
        cout << "FastestFinger\n";
        return;
    } 
    if(n & 1){
        cout << "Ashishgup\n";
        return;
    }
    int cnt = 0;
    while(n % 2 == 0){
        cnt++;
        n /= 2;
    }
    if(cnt == 1){
        if(ispr(n)) cout << "FastestFinger\n";
        else cout << "Ashishgup\n";
    }
    else{
        if(n == 1) cout << "FastestFinger\n";
        else cout << "Ashishgup\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)