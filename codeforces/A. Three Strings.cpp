    //
    // Code By CodeWar :3
    #include <bits/stdc++.h>
    #define pb push_back;
    typedef long long i64;
    typedef long i32;
    const int mod = 1e9+7;
    const int nMax = 1e6+5;
    using namespace std;
    string a,b,c;
    void input(){
        cin >> a >> b >> c;
    }

    void solve(){
        for(int i = 0 ; i < a.length() ; i++){
            if(a[i] == b[i]) swap(a[i],c[i]);
            else if (a[i] == c[i])
                swap(b[i],c[i]);
            else if(b[i] == c[i])
                swap(a[i],c[i]); 
        }
        if(b == a) cout << "YES";
        else cout << "NO";
        cout << endl;
    }

    int main(){
        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        int t; cin >> t;
        while(t--){
            input();
            solve();
        }
        return 0;
    }

    // Code By CodeWar :3