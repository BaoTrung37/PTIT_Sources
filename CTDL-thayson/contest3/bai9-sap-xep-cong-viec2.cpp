/**
 *    authur: Bao Trung (Koi` Cute)
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define all(x) (x).begin(), (x).end()
#define set_arr(a,n); int a[n+5]; for(int i=0;i<n;i++)cin>>a[i];
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int mod = 1e9+7;
int n;
bool vis[10000];
int res[10000];
struct CV{
    int ID;
    int dealine;
    int profit;
};
bool cmp(CV a,CV b){
    return (a.profit > b.profit);
}
CV a[10000];
void solve(){
    cin >> n;
    memset(vis,false,sizeof(vis));
    memset(res,0,sizeof(res));
    for(int i = 0 ; i < n ; i++)
        cin >> a[i].ID >> a[i].dealine >> a[i].profit;
    sort(a,a + n,cmp);
    for(int i = 0 ; i < n ; i++){
        for(int j = min(n ,a[i].dealine) - 1; j >= 0 ; j--){
            if( !vis[j] ){
                res[j] = i;
                vis[j] = true;
                break;
            }
        }
    }
    ll ress = 0;
    int cnt = 0;
    for(int i = 0 ; i < n ; i++){
        if(vis[i]){
            cnt++;
            ress += a[res[i]].profit;
        }
            
    }
    cout <<cnt << ' ' << ress << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3









//https://www.geeksforgeeks.org/job-sequencing-problem/