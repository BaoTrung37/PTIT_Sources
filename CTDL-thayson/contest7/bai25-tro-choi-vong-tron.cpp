/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,k;
void solve(){
    cin >> n >> k;
    vector <int> a(n);
    for(int i = 0; i < n ; i++)
        a[i] = i + 1;
    int i = 0,tmp = 0;
    while(a.size() > 1){
        i = (i + k) % a.size();
        //cout << "i = " << i << '\n';
        //tmp = (i + 1) % a.size();
        //cout << "tmp = " << tmp << '\n';
        a.erase(a.begin() + i);
        //i = tmp;
    }
    // for(int i = 0 ; i < a.size() ; i++)
    //     cout << a[i] << ' ';
    cout << a[0] << '\n'; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)