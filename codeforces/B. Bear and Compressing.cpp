/*
        3 5
        ab a
        cc c
        ca a
        ee c
        ff d
        sử dụng dfs duyệt hết các trường hợp 

        khởi đầu từ a tìm kiếm các string tạo dc a rồi kiếm tra các string 
        tiếp
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int nmax = 10005;

set< string> st;
int n,q;
string a[500],b[500];
void dfs(string s){
    if(s.length() == n)
        st.insert(s);
    else{
        string tmp = s;
        tmp.erase(0,1);
        for(int i = 0 ; i < q ; i++){
            // kiểm tra chữ cái đầu của s[0] có trong b hay ko
            // nếu có duyệt dfs(a + tmp);
            if(b[i][0] == s[0]) dfs(a[i] + tmp);
        }
    }
}
void solve(){
    cin >> n >> q;
    for(int i = 0 ; i < q ; i ++){
        cin >> a[i] >> b[i];
    }
    dfs("a");
    cout << st.size();
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By Pain (Bao Trung)