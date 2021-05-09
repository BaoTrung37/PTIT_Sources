//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,a[10002];
void solve(){
    cin >> n;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    
    int m = 0,x = 0,y = 0;  // số lượng , khối lượng A ăn, khối lượng B ăn
    int l = 0,r = n - 1,ok = 1;
    int tmp1 = 0, tmp2 = 0;    
    
    while(l <= r){    
        if(ok){
            tmp1 = 0;
            while(tmp1 <= tmp2 && l <= r){
                x += a[l];
                tmp1 += a[l]; 
                l++;   
            }
            m++;
        }
        else{
            tmp2 = 0;
            while(tmp2 <= tmp1 && l <= r){
                y += a[r];
                tmp2 += a[r];
                r--;
            }
            m++;
        }
        ok = !ok;
    }
    cout << m << " " << x << ' ' << y << "\n"; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)