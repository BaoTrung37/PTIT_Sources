/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,a[1000005],dp[1000004];
void solve(){
    stack <int> st;
    cin >> n;
    for(int i = 0 ; i < n ;i++)
        cin >> a[i];
    memset(dp,0,sizeof(dp));
    // thêm phẩn tử đầu tiên vào stack
    st.push(0);
    dp[0] = 1;
    for(int i = 1 ; i < n ;i++){
        // pop đến khi rỗng stack hoặc tìm được phần từ lớn hơn a[i]
        while(!st.empty() && a[st.top()] <= a[i]){
            st.pop();
        }
        // nếu stack rỗng thì bằng vị trí i + 1. ngược lại bằng vị trí hiện tại trừ đi vị trí top
        dp[i] = (st.empty()) ? (i + 1) : (i - st.top());
        st.push(i);
    }
    for(int i = 0 ; i < n ;i++)
        cout << dp[i] << ' ';
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)