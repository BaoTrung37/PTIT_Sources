//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
const int mod = 1e9+7;
using namespace std;
int res[1000];
bool visited[1000];
int n;
void process(){
    int dem = 0;
    queue <i64> q;
    q.push(9);
    while(dem < 500){
        int t = q.front() ; q.pop();
        for(int i = 1; i <= 500 && i <= t ; i++){
            if(t % i == 0 && !visited[i] ){
                visited[i] = true;
                res[i] = t;
                dem++;
            }
        }
        q.push(t* 10);
        q.push(t * 10 + 9);
    }
}
void input(){
    cin >> n;
}

void solve(){
    cout << res[n] << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    process();
    int t; cin >> t;
    while(t--){
        input();solve();
    }
    return 0;
}

// Code By CodeWar :3