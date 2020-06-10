/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define vii pair<vector<int>,int>
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

vector <int> a(6),b(6);

int bfs(vector <int> a,vector <int> b){
    queue <vii> q;
    set <vector <int>> st;
    q.push(vii(a,0));
    st.insert(a);
    while(!q.empty()){
        vii s = q.front(); q.pop();
        if(s.first == b){
            return s.second;
        }
        vector <int> c = s.first;
        c.at(0) = s.first.at(3);
        c.at(3) = s.first.at(4);
        c.at(4) = s.first.at(1);
        c.at(1) = s.first.at(0);
        vector <int> d = s.first;
        d.at(1) = s.first.at(4);
        d.at(4) = s.first.at(5);
        d.at(5) = s.first.at(2);
        d.at(2) = s.first.at(1);
        if(c == b || d == b)
            return s.second + 1;
        if(st.find(c) == st.end()){
            st.insert(c);
            q.push(vii(c,s.second + 1));
        }
        if(st.find(d) == st.end()){
            st.insert(d);
            q.push(vii(d,s.second + 1));
        }
    }
}
void solve(){
    for(int i = 0 ; i < 6 ; i++)    cin >> a[i];
    for(int i = 0 ; i < 6 ; i++)    cin >> b[i];
    cout << bfs(a,b);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)