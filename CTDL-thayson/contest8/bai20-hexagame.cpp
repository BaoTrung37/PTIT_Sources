/*
    1 2 3
   8 0 0 4
    7 6 5 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define pvi pair<vector <int>, int>
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

struct Data{
    int c;
    int f[10];
};
bool check(Data n){
    for(int i = 0; i < 8; i++)
        if(n.f[i] != i + 1)
            return false;
    return true;
}
void bfs(Data r){
    Data tmp, a;
    queue<Data> q;
    r.c = 0;
    q.push(r);
    while(!q.empty())
    {
        tmp = q.front();
        q.pop();
        a.c = tmp.c+1;
        a.f[0] = tmp.f[7];
        a.f[1] = tmp.f[0];
        a.f[2] = tmp.f[2];
        a.f[3] = tmp.f[3];
        a.f[4] = tmp.f[4];
        a.f[5] = tmp.f[9];
        a.f[6] = tmp.f[5];
        a.f[7] = tmp.f[6];
        a.f[8] = tmp.f[8];
        a.f[9] = tmp.f[1];
        if(check(a))
        {
            cout<<a.c;
            break;
        }
        q.push(a);
        a.f[0] = tmp.f[0];
        a.f[1] = tmp.f[8];
        a.f[2] = tmp.f[1];
        a.f[3] = tmp.f[2];
        a.f[4] = tmp.f[3];
        a.f[5] = tmp.f[4];
        a.f[6] = tmp.f[6];
        a.f[7] = tmp.f[7];
        a.f[8] = tmp.f[5];
        a.f[9] = tmp.f[9];
        if(check(a))
        {
            cout<<a.c;
            break;
        }
        q.push(a);
    }
}
void solve(){
    Data r;
    cin>>r.f[0]>>r.f[1]>>r.f[2];
    cin>>r.f[7]>>r.f[8]>>r.f[9]>>r.f[3];
    cin>>r.f[6]>>r.f[5]>>r.f[4];
    bfs(r);
}


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)