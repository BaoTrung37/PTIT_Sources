/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n;
// hàm sặp xếp vị trí trong set
// nếu độ dài bằng nhau thì ưu tiên phần tử nhỏ hơn ngược lại là độ dài lơn hơn
struct cmp{
    bool operator () (const pair <int,int> &a, const pair <int ,int> &b ) const{
        int len1 = a.second - a.first + 1;
        int len2 = b.second - b.first + 1;
        if(len1 == len2) return a.first < b.first;
        return len1 > len2;
    }
};
void solve(){
    cin >> n;
    vector <int> a(n);
    set <pair<int,int>,cmp> segs;
    // thêm 2 vị trí đầu tiên vào
    segs.insert({0,n - 1});
    for(int i = 1; i <= n ; i++){
        // lấy phần tử đầu trong set
        pair <int,int> tmp = *segs.begin();
        // xoá phần tử đầu trong set
        segs.erase(segs.begin());
        // trung điểm của đoạn
        int mid = tmp.first + tmp.second >> 1;
        // gán trung điểm = i
        a[mid] = i;
        // kiểm tra từ phân đoạn và thêm vào set
        if(tmp.first < mid) segs.insert({tmp.first, mid - 1});
        if(tmp.second > mid) segs.insert({mid + 1,tmp.second});
    }
    for(auto z : a) cout << z << ' ';
    cout << '\n'; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)