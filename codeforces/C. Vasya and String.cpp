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

int n,k,dp[N],z,a,b,Max;
string s;
void solve(){
    cin >> n >> k >> s;
    for(int i = 0 ; i < n ; i++){
        s[i] == 'a' ? a++ : b++;
        if(min(a,b) > k){
            s[z] == 'a' ? a--:b--,z++;
        }
        else{
            Max = max(Max, a + b);
        }
    }
    cout << Max;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By Pain (Bao Trung)