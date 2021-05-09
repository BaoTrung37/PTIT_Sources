/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(int i=0;i<n;i++)cin>>a[i];
#define db(x) cerr << #x << " = "  << (x) << ' ';
const int N = 100005;

string s,x;
void solve(){
    cin >> s >> x;
    int a = s.length() - 1, b = x.length() - 1;
    while(a > 0 && b > 0){
        if(s[a] == x[b]){
            a--;
            b--;
        }
        else break;
    }
    cout << a + b + 2;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By Pain (Bao Trung)