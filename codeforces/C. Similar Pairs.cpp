#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
void solve(){
    cin>>n;
    int a[n+5],dc = 0, ddc = 0;
    for(int i = 1 ; i <= n ; i++) {
        cin>>a[i];
        if(a[i] &1 ) ddc++;
        else dc++;
    }
    if(dc%2==0 && ddc%2==0) cout<<"YES";
    else{
        sort(a+1,a+1+n);
        for(int i = 1 ; i < n ; i++){
            if(a[i]==a[i+1]-1){
                dc--;ddc--;
                if(dc%2==0 && ddc%2==0) {
                    cout<<"YES\n";
                    return;
                }
            }
        }
        cout<<"NO";
    }
    cout<<'\n';
}
   

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}
//code wwar