/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int nmax = 10005;


void solve()
{
    int n;
    cin >> n;
    int dd[n+1];
    for(int i=1;i<=n;i++)
    {
        cin >> dd[i];
    }
    bool check=false;
    for(int i=2;i<n;i++)
    {
        int a=-1,b=-1;
        for(int j=1;j<i;j++)
        {
            if(dd[i]>dd[j]){
                a=j;break;
            }
        }
        for(int j=n;j>i;j--)
        {
            if(dd[i]>dd[j]){
                b=j;break;
            }
        }
        if(a!=-1 && b!=-1){
                cout<<"YES"<<endl;
            cout<<a<<" "<<i<<" "<<b<<endl;
            return ;
        }
    }
    cout<<"NO"<<endl;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)