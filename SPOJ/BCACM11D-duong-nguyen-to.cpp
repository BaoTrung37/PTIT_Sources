//
#include <bits/stdc++.h>
typedef long long i64;
#define ii pair<int,int>
using namespace std;

int n,m;
vector <int> a;
int ngto(int n){
    if(n < 2) return 0;
    for(int i = 2 ; i <= sqrt(n) ;i++)
        if( n % i == 0) return 0;
    return 1;
}
void sang(){
    for(int i = 1001 ; i <= 9999 ; i++)
        if(ngto(i)) a.push_back(i); 
}
void input(){   
    cin >> n >> m;
}

bool check(int a,int b){
    int cnt = 0;
    while(a > 0 && b > 0){
        int kt1 = a % 10 ; a /= 10;
        int kt2 = b % 10 ; b /= 10;
        if(kt1 != kt2) cnt++;
    }
    return (cnt == 1);
}
int minstep(int n , int m){
    set <int> visited;
    queue <ii> q;
    q.push(ii(n,0));
    visited.insert(n);
    while(!q.empty()){
        ii t = q.front(); q.pop();
        if(t.first == m){
            return t.second;
        }
        if(check(t.first , m))
           return t.second + 1;
        for(int i = 0 ; i < a.size() ;i++){
            if(check(a[i] , t.first) && visited.find(a[i]) == visited.end()){
                visited.insert(a[i]);
                q.push(ii(a[i],t.second + 1));
            }
        } 
    }
}
void solve(){
    cout << minstep(n,m) << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t; cin >> t;
    sang();
    while(t--){
        input();solve();
    }
    return 0;
}

// Code By CodeWar :3