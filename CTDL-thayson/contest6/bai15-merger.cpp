/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int N = 1e6+5;
int n,a[N];
void merger(int a[],int l,int m,int r){
    int i,j,k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1],R[n2];
    for(i = 0 ; i < n1 ; i++)
        L[i] = a[i + l];
    for(j = 0 ; j < n2 ; j++)
        R[j] = a[m + 1 + j];
    i = 0, j = 0, k = l;
    while(i < n1 && j < n2){
        if(L[i] <= R[j]){
            a[k] = L[i];
            i++;
        }
        else{
            a[k] = R[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        a[k] = L[i];
        i++;
        k++;
    }
    while(j < n2){
        a[k] = R[j];
        j++;
        k++;
    }
}
void merge_sort(int a[],int l,int r){
    if(l < r){
        int m =  l + (r - l) / 2;
        merge_sort(a,l , m);
        merge_sort(a,m + 1,r);
        merger(a,l,m,r);
    }
}
void solve(){
    cin >> n;
    for(int i = 0 ; i < n ;i++)
        cin >> a[i];
    merge_sort(a,0,n-1);
    for(int i = 0 ; i < n ; i++)
        cout << a[i] <<' ';
    cout <<'\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)