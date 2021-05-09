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

string s;
void solve(){
    cin >> s;
    int n = s.length();
    int res = 0;
    vector <int> r; 
    for(int i = 0 ; i < n ; i++){
        if(s[i] == '1') res++;
        else{
            r.push_back(res);
            res=0;
        }
    }
     r.push_back(res);
    res = 0;
    sort(all(r),greater<int>());
    for(int i = 0 ; i < r.size() ;i++) 
        if(i % 2 == 0) res += r[i];
    cout << res << "\n";
    
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By Pain (Bao Trung)