/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,k,a[100002];
bool cmp(int a,int b){
    return (abs(b - k) > abs(a - k));
}
void solve(){
    cin >> n >> k;
    for(int i = 0; i < n ; i++)
        cin >> a[i];

    for(int i = 1 ; i < n ; i++){
        int tmp = abs(a[i] - k);
        int j = i - 1;
        if(abs(a[j] - k) > tmp){
            int x = a[i];
            while(abs(a[j] - k) > tmp && j >= 0){
                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = x;
        }
    }

    for(int i = 0 ; i < n ; i++){
        cout << a[i] << ' ';
    }
    cout << '\n';
}
// void solve(){
//     cin >> n >> k;
//     for(int i = 0; i < n ; i++)
//         cin >> a[i];

//     sort(a,a+n,cmp);

//     for(int i = 0 ; i < n ; i++){
//         cout << a[i] << ' ';
//     }
//     cout << '\n';
// }

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)








// void solve(){
//     cin >> n >> k;
//     for(int i = 0; i < n ; i++)
//         cin >> a[i];

//     for(int i = 1 ; i < n ; i++){
//         int tmp = abs(a[i] - k);
//         int j = i - 1;
//         if(abs(a[j] - k) > tmp){
//             int x = a[i];
//             while(abs(a[j] - k) > tmp && j >= 0){
//                 a[j + 1] = a[j];
//                 j--;
//             }
//             a[j + 1] = x;
//         }
//     }

//     for(int i = 0 ; i < n ; i++){
//         cout << a[i] << ' ';
//     }
//     cout << '\n';
// }