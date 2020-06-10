//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int nMax = 1e6+5;
using namespace std;
string s,x;
int test = 1;
void input(){

}

void solve(){
    while(1){
        cin >> s >> x;
        if(s == "END" && x == "END") return;
        int d[30] = {0},f[30] ={0},kt = 1;
        if(s.length() != x.length()) {
            cout << "Case " << test << ": different" << endl;
        }
        else{
            for(int i = 0 ; i < s.length() ; i++){
                d[s[i] - 'a']++;
            }
            for(int i = 0 ; i < x.length() ; i++){
                f[x[i] - 'a']++;
            }
            for(int i = 0 ; i < 26 ; i++){
                if(d[i] != f[i]){
                    cout << "Case " << test << ": different" << endl;
                    kt = 0;
                    break;
                } 
            }
            if(kt == 1) cout << "Case " << test << ": same" << endl;
        }
        test++;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while(t--){
        input();
        solve();
    }
    return 0;
}

// Code By CodeWar :3