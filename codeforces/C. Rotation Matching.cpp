/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(int i=0;i<n;i++)cin>>a[i];
#define db(x) cerr << #x << " = "  << (x) << ' ';
const int N = 200005;

int n,a[N],b[N],pos[N],ans;
map <int,int> mp;
void solve(){
    cin >> n;
    for(int i = 1; i <= n ; i++){
        cin >> a[i];
        pos[a[i]] = i;
    }
    for(int i = 1 ; i <= n ; i++){
        cin >> b[i];
    }
    for(int i = 1 ; i <= n ; i++){
        int cur = pos[b[i]] - i;
        if(cur < 0) cur += n;
        mp[cur]++;
    }
    for(auto i : mp) ans = max(ans,i.second);
    cout << ans;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By Pain (Bao Trung)