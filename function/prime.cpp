/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector
#define ii pair<int, int>
#define pb push_back
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(int i=0;i<n;i++)cin>>a[i];
#define db(x) cerr << #x << " = "  << (x) << '\n';
#define nl "\n"
const int N = 2e5 + 5;

vi<int> prime;
vi<int> lpf;
void sieve(int n){
    prime.assign(1,2);
    lpf.assign(n + 1,2);
    for(int x = 3; x <= n; x += 2){
        if(lpf[x] == 2){
            prime.push_back(lpf[x] = x);
        }
        for(int i = 0; i < prime.size() && prime[i] <= lpf[x] && prime[i]*x <= n; i++){
            lpf[prime[i] * x] = prime[i];
        }
    }
}
bool isprime(int x){
    return (x > 1 && lpf[x] == x);
}
void solve(){
    
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
        //cerr << "\nTime elapsed: " << 10 * clock() / CLOCKS_PER_SEC << " ms\n";
    }
    return 0;
}

// Code By Bao Trung