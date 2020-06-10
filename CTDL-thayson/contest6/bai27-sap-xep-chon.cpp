/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,a[10002];
void in(){
    for(int i = 0 ; i < n ; i++)
        cout << a[i] << ' ';
    cout << '\n';
}
void sort(int a[],int n){
    int k = 1,imin,i,j;
    for(i = 0 ; i < n - 1; i++){
        imin = i;
        for(j = i + 1 ; j < n ; j++){
            if(a[j] < a[imin]){
                imin = j;
            }
        }
        swap(a[i],a[imin]);
        cout << "Buoc " << k << ": ";
        in(); k++;
    }
        
}
void solve(){
    cin >> n;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    sort(a,n);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)