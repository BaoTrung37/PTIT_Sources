/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector
#define ii pair<int, int>
#define pb push_back
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(int i=0;i<n;i++)cin>>a[i];
#define db(x) cerr << #x << " = "  << (x) << '\n';
#define nl "\n"
const int N = 2e5 + 5;

void solve(){
    double T = 95.0;
    double a[6][8];
    for(int i = 0; i <= 4; i++)
        for(int j = 0; j <= 6; j++){
            a[i][j] = 0.0;
        }    
    for(int i = 1; i <= 4; i++){
         for(int j = 1; j <= 6; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= 4; i++){
        for(int j = 1; j <= 6; j++){
            double tmp = a[i][j];
            if(a[i][j] > T)
                a[i][j] = 255.0;
            else 
                a[i][j] = 0.0;

            cout<<a[i][j] << " ";
            double e = tmp - a[i][j];
            a[i][j+1] = (double)(a[i][j+1] +  (double)(7.0/16) * e);
            a[i+1][j]  =  (double)(a[i+1][j] +  (double)(5.0/16) * e);
            a[i+1][j+1]  = (double)(a[i+1][j+1] +   (double)(1.0/16) * e);
            a[i-1][j-1]  = (double)(a[i-1][j-1] +   (double)(3.0/16) * e);
        }
        cout<<"\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; //cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
        //cerr << "\nTime elapsed: " << 10 * clock() / CLOCKS_PER_SEC << " ms\n";
    }
    return 0;
}

// Code By Bao Trung