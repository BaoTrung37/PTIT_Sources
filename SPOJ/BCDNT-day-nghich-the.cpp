/*
    merger sort
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

ll merge(ll a[],int left,int mid,int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;
    ll L[n1],R[n2];
    int i,j,k;
    for(i = 0; i < n1 ; i++)
        L[i] = a[i + left];
    for(j = 0; j < n2 ; j++)
        R[j] = a[mid + 1 + j];
    i = 0, j = 0, k = left;
    
    ll cnt = 0;
    while(i < n1 && j < n2){
        if(L[i] <= R[j]){
            a[k++] = L[i++];
        }
        else{
            a[k++] = R[j++];
            cnt += n1 - i;
        }
    }
    while(i < n1){
        a[k++] = L[i++];
    }
    while(j < n2){
        a[k++] = R[j++];
    }
    return cnt;
}
ll merger_sort(ll a[],ll left,ll right){
    ll res = 0;  
    if(left < right){
        ll mid = (left + right) / 2;
        res += merger_sort(a,left,mid);
        res += merger_sort(a,mid + 1, right);
        res += merge(a,left,mid,right);
    }
    return res;
}
void solve(){
    int n;
    cin >> n;
    ll a[n + 2];
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    cout << merger_sort(a,0,n-1) << '\n';   
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)