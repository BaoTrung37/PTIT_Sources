/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,a[10000006];
int partision(int a[],int low,int high){
    int pi = a[high];
    int left = low;
    int right = high - 1;
    while(1){
        while(left <= right && a[left] < pi) left++;
        while(right >= left && a[right] > pi) right--;
        if(left >= right) break;
        swap(a[left],a[right]);
        left++;
        right--;
    } 
    swap(a[left],a[high]);
    return left;
}
void quick_sort(int a[],int l , int h){
    if(l < h){
        int pi = partision(a,l,h);
        quick_sort(a,l ,pi - 1);
        quick_sort(a,pi + 1,h);
    }
}
void solve(){
    cin >> n;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    quick_sort(a,0,n- 1);
    for(int i = 0 ; i < n ; i++)
        cout << a[i] << ' ';
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)