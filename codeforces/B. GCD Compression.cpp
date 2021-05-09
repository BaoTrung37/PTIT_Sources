/**/
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
void solve(){
    cin >> n;
    vector <int> a,b;
    int k = n - 1;
    for(int i = 0 ; i < 2 * n ; i++){
        int x;
        cin >> x;
        if(x % 2 == 0){
            a.push_back(i + 1);
        }
        else{
            b.push_back(i + 1);
        }
    }  
    for(int i = 0 ; i < a.size() ; i+=2){
        if(k > 0 && (i + 1) < a.size())
            k--,cout << a[i] <<' ' << a[i + 1] << '\n';
    }
    for(int i = 0 ; i < b.size() ; i+=2){
        if(k > 0 && (i + 1) < b.size() )
            k--,cout << b[i] <<' ' << b[i + 1] << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)