/*
    Time = O(n^2) , Memory = O(n)
    tạo 1 mảng lưu số lần xuất hiện của phần tử trong mảng
    duyệt 2 for, duy trì 1 tổng có độ dài bằng 2.
    Theo đề thì tổng của các phần từ ko quá n
    và cnt[sum] = 0, tránh lặp lại trong quá trình tính toán
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,a[10002],cnt[10002];
void solve(){
    // nhập
    cin >> n;
    memset(cnt,0,sizeof(cnt));
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        cnt[a[i]]++;
    }
    // giải 
    int ans = 0;
    for(int i = 0 ; i < n ; i++){
        int sum = 0;
        for(int j = i ; j < n ; j++){
            sum += a[j]; // tổng 
            if(i == j) continue; // vì độ dài tối thiểu bằng 2 nên ko tính i == j
            if(sum <= n){ 
                ans += cnt[sum];
                cnt [sum] = 0;
            }
        }
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)