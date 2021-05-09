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
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
const int N = 100005;

int n,Max;
void solve(){
    cin >> n;
    set_vect(a,n);
    sort(all(a));
    Max = 0;
    for(int s = 1 ; s <= 2 * n ; s++){
        int cnt = 0, l = 0 , r = n - 1;
        while(l < r){
            if(a[l] + a[r] == s){
                l++;
                r--;
                cnt ++;
            }
            else if(a[l] + a[r] < s){
                l++;
            }
            else r--;
        }
        Max = max(cnt,Max);
    }    
    cout << Max << "\n";
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By Pain (Bao Trung)