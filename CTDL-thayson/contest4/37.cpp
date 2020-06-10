/*author : mdp*/
#include<bits/stdc++.h>
using namespace std;
#define ONLINE_JUDGE "ONLINE_JUDGE"
#define setIO() ios::sync_with_stdio(false); cin.tie(0);
#define all(a) a.begin(),a.end()
#define fill(x,b) memset((x),b,sizeof((x)))
#define fill2D(x,r,c,b) memset((x),b, sizeof(x[0][0]) * r * c)
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef vector<ii> vpii;
int test = 1 , MULTI_TEST = 1; 
int n,x;
vi a;
void Input(){
    cin >> n >> x; a.resize(n);
    for(auto &z : a) cin >> z;
}   
void Solve(){
    int pos = lower_bound(all(a),x) - a.begin();
    if( pos == n ){
        cout << a[pos] << '\n';
        return;
    }
    if(a[pos] > x && pos == 0){
        cout << -1 << '\n';
        return;
    }
    if( a[pos] == x ) cout << pos + 1;
    else cout << pos;
    cout << '\n';

}
int main(){
    setIO();
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    if(MULTI_TEST == 1) cin >> test;
    for(int i = 1 ; i <= test ; i++){Input(); Solve();}
    return 0;
}

 