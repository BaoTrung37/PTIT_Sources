/*
    có 11 màu và căn 1000 thì có đúng 11 số nguyên tố 
    tìm các số chia hết cho số cùng 1 số nguyên tố và cho nó cùng 1 màu
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n;
void solve(){
    cin >> n;
    vector <int> res(n),v(n);
    for(auto &z : v)    cin >> z;
    int c = 0;
    for(int p :{2,3,5,7,11,13,17,19,23,29,31}){
        int ok = 0;
        for(int i = 0 ; i < n ; i++){
            if(v[i] % p == 0 && !res[i]){
                if(!ok){
                    c++;
                    ok = 1;
                }
                res[i] = c;
            }
        }
    }
    cout << c << '\n';
    for(auto z : res) cout << z << ' ';
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)