/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,a[100004];
void nextgreater(int n,int NG[]){
    stack <int> st;
    for(int i = n - 1 ; i >= 0 ; i--){
        while(!st.empty() && a[st.top()] <= a[i])
            st.pop();
        if(!st.empty())
            NG[i] = st.top();
        else{
            NG[i] = -1;
        }
        st.push(i);
    }
}
void rightsmal(int n,int RS[]){
    stack <int> st;
    for(int i = n - 1 ; i >= 0 ; i--){
        while(!st.empty() && a[st.top()] >= a[i])
            st.pop();
        if(!st.empty())
            RS[i] = st.top();
        else{
            RS[i] = -1;
        }
        st.push(i);
    }
}
void solve(){
    stack <int> st;
    int NG[100004],RS[100004];
    cin >> n;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    nextgreater(n,NG);
    rightsmal(n,RS);
    for(int i = 0 ; i < n ; i++){
        if(NG[i] != -1 && RS[NG[i]] != -1)
            cout << a[RS[NG[i]]] << ' ';
        else cout << - 1 << ' ';
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)