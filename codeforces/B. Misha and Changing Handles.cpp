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

int n;
map <string , string > mp;
string s,x;
void solve(){
    cin >> n;
    while(n--){
        cin >> s >> x;
        if(mp[s].empty()){
            mp[x] = s;
        }
        else mp[x] = mp[s];
        mp.erase(s);
    }
    cout << mp.size() << "\n";
    for(auto i : mp){
        cout << i.Y << " " << i.X << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By Pain (Bao Trung)