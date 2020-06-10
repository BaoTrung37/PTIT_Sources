//https://www.spoj.com/PTIT/problems/P192SUMD/
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;

int main(){
        int n,kt = 1,minn = INT16_MAX;
        cin >> n;
        int a[n+2],b[n+2];
        for(int i = 0 ; i < n ; i++)
            cin >> a[i];
        for(int i = 0 ; i < n ; i++)
            cin >> b[i];
        for(int i = 0 ; i < n - 2 ; i++){
            for(int j = i + 1 ; j < n - 1 ; j ++){
                for(int k =  j + 1 ; k < n ; k++){
                    if(a[i] < a[j] && a[j] < a[k]){
                        kt = 0;
                        if(b[i] + b[j] + b[k] < minn)
                            minn = b[i] + b[j] + b[k];
                    }
                }
            }
        }
        if(kt == 1) cout << "-1" << endl;
        else cout << minn << endl;
    return 0;
}
