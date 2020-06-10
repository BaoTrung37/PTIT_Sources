/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair <int,int> ii;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,m,a[4];
int pri[10006] = {0},cnt[10005];
void isprime(){
    pri[1] = pri[0] = 1;
    for(int i = 2 ; i <= 100 ; i++){
        if(pri[i] == 0){
            for(int j = i * i ; j <= 10000; j += i)
                pri[j] = 1;
        }
    }
}
void so_to_mang(int a[],int n){
    for(int i = 3 ; i >= 0 ; i--){
        a[i] = n % 10;
        n /= 10;
    }
}
int mang_to_so(int a[]){
    int p = 1,res = 0;
    for(int i = 3 ; i >= 0 ; i--){
        res += a[i] * p;
        p *= 10;
    }
    return res;
}
void solve(){
    cin >> n >> m;
    memset(cnt,-1,sizeof(cnt));
    queue <int> q;
    q.push(n);
    cnt[n] = 0;
    while(!q.empty()){
        int s = q.front(); q.pop();
        for(int i = 0 ; i <= 3 ; i++){
            so_to_mang(a,s);
            for(int j = 0 ; j <= 9 ; j++){
                a[i] = j;
                int tmp = mang_to_so(a);
                if(pri[tmp] == 0 && tmp > 1000 && cnt[tmp] == -1){
                    cnt[tmp] = cnt[s] + 1;
                    q.push(tmp);
                }
            }
        }
    }
    cout << cnt[m] << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    isprime();
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)