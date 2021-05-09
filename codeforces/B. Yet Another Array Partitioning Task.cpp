/*
    ý tưởng : lưu vị trị và giá trị của từ phần tử trong mảng
    sort, cộng m * k phần từ lớn nhất và đánh dấu các phần tử đó lại
    duyệt đếm các vị trí đã đánh dấu đủ m và k > 0 thì in vị trí đó ra 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(int i=0;i<n;i++)cin>>a[i];
#define db(x) cerr << #x << " = "  << (x) << ' ';
const int N = 200005;

int n,m,k,cnt;
ii a[N];
int pos[N];
ll res;
void solve(){
    cin >> n >> m >> k;
    for(int i = 1; i <= n ; i++){
        int x; cin >> x;
        a[i] = {x,i};
    }  
    sort(a + 1 , a + 1 + n);
    for(int i = 1 ; i <= k * m ; i++){
        res += a[n - i + 1].first;
        pos[a[n - i + 1].second] = 1;
    }
    cout << res << "\n";
    cnt = 0;
    for(int i = 1 ; i <= n ; i++){
        cnt += pos[i];
        if(cnt == m){
            k--;
            if(k) cout << i << " ";
            cnt = 0;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By Pain (Bao Trung)