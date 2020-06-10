    /**
     *    authur: Bao Trung (Koi` Cute)
    **/
    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    typedef pair<int,int> pii;
    #define all(x) (x).begin(), (x).end()
    #define set_arr(a,n); int a[n+5]; for(int i=0;i<n;i++)cin>>a[i];
    #define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
    const int mod = 1e9+7;
    string a,b;
    int chuyendoi(string s,char k){
        int res = 0;
        char x;
        if(k == '5') x = '6';
        else x = '5'; 
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == k){
                s[i] = x;
            }
            res = res * 10 + (s[i] - '0');
        }
        return res;
    }
    void solve(){
        cin >> a >> b;
        cout << chuyendoi(a,'6') + chuyendoi(b,'6') << ' ' << chuyendoi(a,'5') + chuyendoi(b,'5');
    }

    int main(){
        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        int t = 1; //cin >> t;
        while(t--){solve();}
        return 0;
    }

    // Code By CodeWar :3