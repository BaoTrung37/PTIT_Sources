//
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
string s;
int n,k;
void input(){
    cin >> n >> k;
    cin >> s;
}
int Check(string s,int k){
    int vtT = -1,vtG = -1;
    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] == 'T'){
            vtT = i;
        }
        if(s[i] == 'G'){
            vtG = i;
        }
    }
    int i;
    if(vtT < vtG) swap(vtT,vtG);
    //cout << vtG << " " << vtT << endl;
    for(i = vtG ; i < vtT ; i += k)
        if(s[i] == '#') break;
    //cout << i << endl;
    if(i == vtT) return 1;
    return 0;
}

int main(){
    input();
    if(Check(s,k) == 1)   cout << "YES" << endl;
    else cout << "NO" << endl;
    //Check(s,k);
    return 0;
}
