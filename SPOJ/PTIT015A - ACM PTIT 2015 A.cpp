//
#include <bits/stdc++.h>
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;

using namespace std;
string a,b,c,res="";
int d[20];
void Dem(string s){
    for(int i=0 ; i<s.length() ; i++)
        d[ s[i] - '0']++;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        for(int i=0 ; i<10 ; i++) d[i]=0;
        Dem(a);
        Dem(b);
        Dem(c);
        res="";
        for(int i=9 ; i>=0 ; i--){
            for(int j=1 ; j <= d[i]; j++)
                res += char (i + 48); 
        }
        while(res.length()> 1 && res[0]== '0') res.erase(0,1);
        cout << res << endl;
    }
    return 0;
}
