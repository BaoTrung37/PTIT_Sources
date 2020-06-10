/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int minSwaps(int a[], int n){ 
    pair<int, int> pos[n]; 
    for (int i = 0; i < n; i++) 
    { 
        pos[i].first = a[i]; 
        pos[i].second = i; 
    }
    sort(pos, pos + n); 
    vector<bool> vis(n, false); 
    int ans = 0; 
    for (int i = 0; i < n; i++){ 
        if (vis[i] || pos[i].second == i) 
            continue; 
        int cycle_size = 0; 
        int j = i; 
        while (!vis[j]) { 
            vis[j] = 1; 
            j = pos[j].second; 
            cycle_size++; 
        }
        if (cycle_size > 0) { 
            ans += (cycle_size - 1); 
        } 
    }
    return ans; 
} 
int n , a[10002];
void solve(){
    cin >> n;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    cout << minSwaps(a,n) << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)