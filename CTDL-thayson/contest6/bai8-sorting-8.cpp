/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int count(int x, int y[], int n, int Ny[]) {
    if (x == 0) return 0; 
    if (x == 1) return Ny[0]; 
    int* idx = upper_bound(y, y + n, x); 
    int ans = (y + n) - idx; 
    ans += (Ny[0] + Ny[1]);  
    if (x == 2)  ans -= (Ny[3] + Ny[4]); 
    if (x == 3)  ans += Ny[2]; 
  
    return ans; 
} 
int countPairs(int x[], int y[], int m, int n) 
{ 
    int Ny[5] = {0}; 
    for (int i = 0; i < n; i++) 
        if (y[i] < 5) 
            Ny[y[i]]++; 
    sort(y, y + n); 
    int total_pairs = 0;
    for(int i = 0; i < m; i++) 
        total_pairs += count(x[i], y, n, Ny); 
    return total_pairs; 
} 
int n,m;
void solve(){
    cin >> n >> m;
    int a[n+2],b[m+2];
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    for(int i = 0 ; i < m ; i++)
        cin >> b[i];
    cout << countPairs(a,b,n,m) << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)