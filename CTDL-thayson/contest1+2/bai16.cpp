//
// Code By CodeWar :3
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
const int mod = 1e9+7;
#define pb push_back;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
int n,k,x[1000][1000],a[1000];
vector <int> s;
void solve(){
    cin >> n >> k;
    for(int i = 1 ; i <= n ; i++)
        a[i] = i;
    for(int i = 1 ; i <= n; i++){
        for(int j = 1 ; j <= n ; j++)
            cin >> x[i][j];
    }
    int i;
    bool OK = false;
    while(!OK){
        int sum = 0;
        for(int i = 1; i <= n ; i++){
            sum += x[i][a[i]];
        }
        if(sum == k){
            for(int i = 1; i <= n ; i++)
                s.push_back(a[i]);
        }
        i = n - 1;
        while(a[i] > a[i + 1]) i--;
        if(i <= 0) OK = true;
        else{
            int j = n;
            while(a[i] > a[j]) j--;
            swap(a[i], a[j]);
            int d = i + 1, c = n;
            while(d < c){
                swap(a[d],a[c]);
                d++;
                c--;
            }
        }    
    }
    cout << s.size() / n << endl;
    for(int i = 0,cnt = 0; i < s.size() ; i++){
        cout << s[i] << ' ';
        cnt++;
        if(cnt == n) cnt = 0, cout << endl;
    } 
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3