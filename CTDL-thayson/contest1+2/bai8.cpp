//
// Code By CodeWar :3
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
const int mod = 1e9+7;
#define pb push_back;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
int a[100],n;
void solve(){
    cin >> n;
    for(int i = 1 ; i <= n ; i++){
        a[i] = n - i + 1;
    }
    int i;
    bool OK = false;
    while(!OK){
        for(i = 1 ; i <= n ; i++)
            cout << a[i];
        cout << ' ';
        i = n - 1;
        while(a[i] < a[i + 1]) i--;
        if(i <= 0) OK = true;
        else{
            int j = n;
            while(a[i] < a[j]) j--;
            swap(a[i], a[j]);
            int d = i + 1, c = n;
            while(d < c){
                swap(a[d],a[c]);
                d++;
                c--;
            }
        }    
    }
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3