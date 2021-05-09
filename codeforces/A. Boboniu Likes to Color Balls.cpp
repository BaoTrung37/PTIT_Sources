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

int a,b,c,d;
bool Ok(int a,int b,int c,int d){
    return (a % 2 + b % 2 + c % 2 + d % 2 <= 1);
}
void solve(){
    cin >> a >> b >> c >> d;
    if(Ok(a,b,c,d)){
        cout << "YES\n";
    }
    else if (a > 0 && b > 0 && c > 0 && Ok(a-1,b-1,c-1,d+3)){
        cout << "YES\n";
    }
    else cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By Pain (Bao Trung)