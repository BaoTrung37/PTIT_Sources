/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,a[10002];

void sort(int a[],int n){
    int k = 0,i,j,key;
    for(i = 0 ; i < n; i++){
        key = a[i];
        j = i - 1;
        while(j >= 0 && a[j] > key){
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;

        cout << "Buoc " << k << ": ";
        for(int l = 0 ; l <= i ; l++)
            cout << a[l] << ' ';
        cout << '\n';
        k++;
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