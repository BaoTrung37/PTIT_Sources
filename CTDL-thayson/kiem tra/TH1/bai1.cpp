/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

string a;
void solve(){
    cin >> a;
    int n = a.length();
    int i = n - 1;
    while(a[i] == '0' && i >= 0){
        i--;
    }
    if(i == -1){
        while(n--)
            cout << 1;
        cout << '\n';
    }
    else{
        a[i] = '0';
        for(int j = i + 1 ; j < n ; j++)
            a[j] = '1';
        for(int i = 0 ; i < n ; i++)
            cout << a[i];
        cout << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)