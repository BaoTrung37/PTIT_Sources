//
// Code By CodeWar :3
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
const int mod = 1e9+7;
#define pb push_back;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
int a[1000];
int n,k;  
string s;
int kt(int a[],int n,int k){
    int s = 0, dem0 = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == 0){ 
            dem0++;
            if(dem0 >= k) 
                s++;
        } 
        else dem0=0;
    }
    if(s == 1) return 1;
    return 0;
}
void solve(){
    cin >> n >> k;
    for(int i = 0 ; i < n ; i++)
        a[i] = 0;
    int OK = 0,res = 0;
    while(!OK){
        if(kt(a,n,k)){
            res++;
            for(int i = 0 ; i < n ; i++){
                if(a[i] == 0)
                    s += 'A';
                else s += 'B';
            }
        }
        int i = n - 1;
        while( i >= 0 && a[i] == 1){
            a[i] = 0;
            i--;
        }
        if(i < 0) OK = 1;
        else a[i] = 1;
    }
    cout << res << endl;
    for(int i = 0,cnt = 0;i < s.length() ; i++){
        cout << s[i];
        cnt++;
        if(cnt == n) cnt = 0 ,cout << endl;
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